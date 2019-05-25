#include "relationfile.h"
#include "string.h"

sdb::RelationFile::RelationFile(const std::string relationPath) : path(relationPath)
{
    file.open(relationPath.c_str(), std::fstream::binary
                                    | std::fstream::in
                                    | std::fstream::out);

    // if file of relation doesn't exists
    if(!file.good())
    {
        throw sdb::FileDoesntExistException(
          "relation file doesn\'t exist"
        );
    }

}

sdb::RelationFile::~RelationFile()
{
    file.clear();
    file.flush();
    file.close();
}

size_t sdb::RelationFile::readScheme(
        sdb::Header &header,
        sdb::Types &types
)
{
    // do some preparations
    file.flush();
    file.seekg(0, std::ios_base::beg);

    const long VERY_BIG_SIZE = 900;
    char  buffer[VERY_BIG_SIZE];

    // read size of scheme
    long size;
    read(size);

    // read scheme
    while(size --> 0)
    {
        // read name
        long nameSize = 0;
        read(nameSize);

        if (nameSize >= VERY_BIG_SIZE)
        {
            readCString(buffer, VERY_BIG_SIZE);
            std::string name(buffer);

            file.close();
            throw sdb::TooBigNameException(
                        name + " size is impossible big (" +
                        std::to_string(nameSize) + ")"
            );
        }

        readCString(buffer, nameSize);
        std::string name(buffer);

        // read index
        long index   = 0;
        read(index);

        // read type
        long typeCode = 0;
        read(typeCode);

        // modify header & types
        header.emplace(std::make_pair(name, index));
        types.emplace(std::make_pair(name, typeCode));
    }

    return file.tellg();
}

// sorry for shitty realisation
// I hate deadlines :(((((
void sdb::RelationFile::readBody(size_t offset, size_t elementSize,
                                 sdb::Body &body)
{
    using sdb::Body;
    using sdb::BodyElement;

    using sdb::Integer;
    using sdb::Float64;
    using sdb::Text;

    // do preparations
    file.flush();
    file.seekg(offset, std::ios_base::beg);

    // buffer for fast string operations
    const long BUFFER_SIZE = 1000;
    char buffer[BUFFER_SIZE];

    BodyElement tempElement(elementSize);

    long bodySize = 0;
    read(bodySize);

    // read the all body elements & append to body
    while (bodySize --> 0)
    {
        // read all body element elements
        for (std::shared_ptr<Any>& pointer : tempElement)
        {
            long type = 0;
            read(type);

            switch (type) {
            case sdb::types::INTEGER:
            {
                long value;
                read(value);

                pointer = std::shared_ptr<Any>(new Integer(value));

                break;

            }
            case sdb::types::FLOAT64:
            {
                double value;
                read(value);

                pointer = std::shared_ptr<Any>(new Float64(value));

                break;

            }
            case sdb::types::TEXT:
            {
                long textSize;
                read(textSize);

                if (textSize >= BUFFER_SIZE)
                {

                    readCString(buffer, BUFFER_SIZE);
                    std::string text(buffer);

                    file.close();
                    throw sdb::TooBigNameException(
                                text + " size is impossible big (" +
                                std::to_string(textSize) + ")"
                                );
                }

                readCString(buffer, textSize);

                std::string value(buffer);

                pointer = std::shared_ptr<Any>(new Text(value));

                break;

            }
            default:
                file.close();
                throw sdb::UnsupportedTypeException(
                            "type from RelationFile is unsupported"
                            );
                break;
            }
        }

        body.push_back(tempElement);
    }

}

void sdb::RelationFile::writeBody(const sdb::Body &body)
{
    using sdb::BodyElement;

    using sdb::Integer;
    using sdb::Float64;
    using sdb::Text;

    using sdb::types::INTEGER;
    using sdb::types::FLOAT64;
    using sdb::types::TEXT;

    long size = body.size();
    file.write((char*)&size, sizeof(size));

    // write the all body elements
    for (const BodyElement& element : body)
    {
        // write the all cells
        for(const std::shared_ptr<Any>& pointer : element)
        {
            // write type code
            write<long>(pointer->type());

            // write value
            switch (pointer->type()) {
            case INTEGER:
            {
                std::shared_ptr<Integer> wpointer \
                        = std::dynamic_pointer_cast<Integer>(pointer);

                write<long>(wpointer->getValue());

                break;
            }
            case FLOAT64:
            {
                std::shared_ptr<Float64> wpointer \
                        = std::dynamic_pointer_cast<Float64>(pointer);

                write<double>(wpointer->getValue());

                break;
            }
            case TEXT:
            {
                std::shared_ptr<Text> wpointer \
                        = std::dynamic_pointer_cast<Text>(pointer);

                char * cstr = new char [wpointer->getValue().length()+1];
                std::strcpy (cstr, wpointer->getValue().c_str());
                long         length = strlen(cstr) + 1;

                write<long>(length);

                writeCString(cstr, length);

                delete []cstr;

                break;
            }
            default:
                file.close();
                throw sdb::UnsupportedTypeException(
                            "body contains unsupported type"
                );
                break;
            }
        }
    }
}

void sdb::RelationFile::writeScheme(const sdb::Header &header, const sdb::Types &types)
{
    // write:
    // attributes count (scheme size)
    long size = header.size();
    write(size);

    // scheme: header (size, char*), index (long), type (long)
    for (const auto& pair : header)
    {
        // header
        const char * bytes = pair.first.c_str();
        size = strlen(bytes) + 1;

        write(size);
        file.write(bytes, size);

        // index
        long index = pair.second;
        write(index);

        // type code (long)
        long typeCode = types.at(pair.first);
        write(typeCode);
    }

}


sdb::Relation sdb::RelationFile::select()
{
    using sdb::Header;
    using sdb::Body;
    using sdb::Types;

    file.flush();
    file.seekg(0, std::ios_base::beg);

    // construct relation
    Header header;
    Types  types;
    Body   body;

    size_t bodyOffset = readScheme(header, types);

    readBody(bodyOffset, header.size(), body);

    return Relation(header, body, types);
}

// sorry for a shitty realisation
// I hate deadlines :((((
void sdb::RelationFile::deleteFrom(std::function<bool (const std::vector<std::shared_ptr<sdb::Any> > &)> predicate)
{
    // get values from file
    Relation relation = select();

    // do the all operations in memory
    auto antiPredicate = [&](const std::vector<std::shared_ptr<sdb::Any> > & element)
    {
        return !predicate(element);
    };

    relation.where(antiPredicate);

    // clear file
    file.seekp(0, std::ios_base::beg);
    file.flush();
    file.clear();
    file.close();

    file.open(path.c_str(), std::fstream::trunc | std::fstream::binary |
                            std::fstream::in    | std::fstream::out);

    writeScheme(relation.getHeader(), relation.getTypes());
    writeBody(relation.getBody());

    file.flush();
}


// sorry for a shitty realisation
// I hate deadlines :(((((
void sdb::RelationFile::insert(const sdb::Relation &inputRelation)
{
    std::cout << "input:" << inputRelation.toString() << std::endl;
    // get values from file
    Relation relation = select();

    // do the all operations in memory
    relation.merge(inputRelation);

    file.seekp(0, std::ios_base::beg);
    file.flush();
    file.clear();
    file.close();

    file.open(path.c_str(), std::fstream::trunc | std::fstream::binary
                            | std::fstream::in | std::fstream::out);

    file.seekp(0, std::ios_base::beg);

    writeScheme(relation.getHeader(), relation.getTypes());
    writeBody(relation.getBody());

    file.flush();
}

sdb::RelationFile sdb::RelationFile::createRelationFile(
        const sdb::Header &header,
        const sdb::Types &types,
        const std::string &relationPath
)
{
    // create file of relation
    const char * path = relationPath.c_str();
    std::ofstream file(path, std::ios::binary);

    // write:
    // attributes count (scheme size)
    long size = header.size();
    file.write((char*)&size, sizeof(size));

    // scheme: header (size (long), char*), index (long), type (long)
    for (const auto& pair : header)
    {
        // header
        const char * bytes = pair.first.c_str();
        size = strlen(bytes) + 1;

        file.write((char*)&size, sizeof(size));
        file.write(bytes, size);

        // index
        long index = pair.second;
        file.write((char*)&index, sizeof(index));

        // type code (long)
        long typeCode = types.at(pair.first);
        file.write((char*)&typeCode, sizeof(typeCode));
    }

    // body count (body size = 0)
    size = 0;
    file.write((char*)&size, sizeof(size));

    file.flush();
    file.clear();

    file.close();
    return RelationFile(relationPath);
}
