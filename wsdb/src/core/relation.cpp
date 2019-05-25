#include "relation.h"
#include <algorithm>
#include <typeindex>


namespace sdb {

struct BodyElementComparator BEComparator;

Relation::Relation(const Header& initHeader, const Body& initBody, const Types& initTypes)
    : header(initHeader), body(initBody), types(initTypes)
{
    if (initHeader.size() == 0)
    {
        throw IncorrectArgsException("header is empty");
    }

    for (std::vector<std::shared_ptr<Any>> elem : initBody)
    {
        if(elem.size() != initHeader.size())
        {
            throw IncorrectArgsException("one of body elements doesn't fit to header");
        }
    }
}

Relation::Relation(const Relation &other)
    : header(other.header), body(other.body), types(other.types)
{
}

Relation Relation::operator =(const Relation &other)
{
    // check for self - asigment
    if(this != &other)
    {
        header = other.header;
        body = other.body;
        types = other.types;
    }

    return *this;
}

std::string Relation::toString() const
{
    std::string output = "";

    // assosiate indexes and attribute names
    std::vector<std::string> attributesNames(header.size());

    for (const auto& attribute : header)
    {
        attributesNames[attribute.second] = attribute.first;
    }

    // add attributes names
    for (auto& name : attributesNames)
    {
        output += name + " ";
    }
    output += "\n\r";

    // add values
    for (const BodyElement& element : body)
    {
        for(auto pointer : element)
        {
            output += pointer->toString() + " ";
        }

        output += "\n\r";
    }

    return output;
}

Relation Relation::renameAttribute(const std::string &prevName,
                                   const std::string &newName)
{
    // find previos attribute & check if exist & rename
    try
    {
        header[newName] = header.at(prevName);
        header.erase(prevName);
    }
    catch(std::out_of_range ex)
    {
        throw IncorrectArgsException(prevName + " attribute does not exist");
    }

    // the same with types
    try
    {
        auto typeToMove = types.at(prevName);

        types.emplace(std::make_pair(newName, typeToMove));

        types.erase(prevName);
    }
    catch(std::out_of_range ex)
    {
        throw IncorrectArgsException(prevName + " attribute does not exist");
    }

    return *this;
}

size_t Relation::indexOfAttribute(const std::string &name) const
{
    try
    {
        return header.at(name);
    }
    catch(std::out_of_range ex)
    {
        throw IncorrectArgsException(name + " attribute does not exist");
    }
}

Relation Relation::merge(const Relation &other)
{
    if ((header != other.header) || (types != other.types))
    {
        throw IncorrectArgsException("relations have different schemas");
    }
    else
    {
        std::set<std::vector< std::shared_ptr<Any> >, BodyElementComparator>\
                mergeSet(other.body.begin(), other.body.end());

        for (auto& el : body)
        {
            mergeSet.insert(el);
        }

        body.clear();
        body.insert(body.begin(), mergeSet.begin(), mergeSet.end());
    }

    return *this;
}

Relation Relation::conjuction(const Relation &other)
{
    if ((header != other.header) || (types != other.types))
    {
        throw IncorrectArgsException("relations have different schemas");
    }
    else
    {
        Body stupidCopy2 = other.body;
        Body stupidCopy1 = body;

        std::sort(stupidCopy1.begin(), stupidCopy1.end(), BEComparator);
        std::sort(stupidCopy2.begin(), stupidCopy2.end(), BEComparator);

        body.resize(stupidCopy1.size() + stupidCopy2.size());

        auto iter = std::set_intersection(stupidCopy1.begin(), stupidCopy1.end(),
                                          stupidCopy2.begin(), stupidCopy2.end(),
                                          body.begin(), BEComparator);

        body.resize(iter - body.begin());
    }

    return *this;
}

Relation Relation::subtraction(const Relation &other)
{
    if ((header != other.header) || (types != other.types))
    {
        throw IncorrectArgsException("relations have different schemas");
    }
    else
    {
        Body stupidCopy1 = body;
        Body stupidCopy2 = other.body;

        std::sort(stupidCopy1.begin(), stupidCopy1.end(), BEComparator);
        std::sort(stupidCopy2.begin(), stupidCopy2.end(), BEComparator);

        auto resultIterator = std::set_difference(
                    stupidCopy1.begin(), stupidCopy1.end(),
                    stupidCopy2.begin(), stupidCopy2.end(),
                    body.begin(), BEComparator
        );
        body.resize(resultIterator - body.begin());
    }

    return *this;
}

Relation Relation::time(const Relation &other)
{
    // check, that headers doesn't intersect
    // find intersection (bad example, find better if wanna refactor)
    for (auto& element : header)
    {
        auto result = other.header.find(element.first);

        if(result != other.header.end())
        {
            throw IncorrectArgsException("other relation header intersects");
        }
    }

    // unite headers & types
    size_t offset = header.size();
    for (auto element : other.header)
    {
        element.second += offset;

        header.insert(element);

        auto typeToAdd = other.types.at(element.first);
        types.emplace(std::make_pair(element.first, typeToAdd));
    }

    // make a cortesian product of bodies
    // copy body
    Body stupidCopy = body;

    // alloc space for product
    body.resize(stupidCopy.size() * other.body.size());

    // make a product
    auto iterator = body.begin();
    for (const auto& element1 : stupidCopy)
    {
        for(const auto& element2 : other.body)
        {
            iterator->clear();
            iterator->insert(iterator->begin(), element2.begin(), element2.end());
            iterator->insert(iterator->begin(), element1.begin(), element1.end());

            ++iterator;
        }
    }

    return *this;
}

Relation Relation::where(std::function<bool (const std::vector<std::shared_ptr<Any>> &)> predicate)
{
    body.erase(
                std::remove_if(
                    body.begin(), body.end(),
                    [&](const BodyElement& elem) {return !predicate(elem);}
                ),
            body.end()
            );

    return *this;
}

Relation Relation::projection(std::list<std::string> attributes)
{
    attributes.unique();

    try{
        // make a projection in body
        for (BodyElement& elem : body)
        {
            BodyElement copyOfElem = elem;

            elem.resize(attributes.size());

            auto attributesIterator = attributes.begin();

            for (auto& pointer : elem)
            {
                pointer = copyOfElem.at(header.at(*attributesIterator));
                attributesIterator++;
            }
        }
    }
    // seems that attributes are incorrect
    catch(std::out_of_range ex)
    {
        throw IncorrectArgsException("there are attributes, that does not exist");
    }

    // make a projection in header
    Header copyOfHeader = header;
    header.clear();
    size_t counter = 0;

    for (const auto& attribute : attributes)
    {
        header[attribute] = counter;
        counter++;
    }

    // make a projection in types
    Types copyOfTypes = types;
    types.clear();

    for (const auto& attribute : attributes)
    {
        types.emplace(
          std::make_pair(
            attribute,
            copyOfTypes.at(attribute)
          )
        );
    }

    return *this;
}

Relation Relation::join(const Relation &other, std::function<bool (const std::vector<std::shared_ptr<Any>> &)> predicate)
{
    this->time(other);
    this->where(predicate);

    return *this;
}
}
