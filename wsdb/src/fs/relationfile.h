#ifndef RELATIONFILE_H
#define RELATIONFILE_H


#include <string>
#include <functional>
#include <fstream>
#include <iostream>

#include "../core/relation.h"

#include "../core/integer.h"
#include "../core/float64.h"
#include "../core/text.h"

#include "../exceptions/filedoesntexistexception.h"
#include "../exceptions/toobignameexception.h"
#include "../exceptions/unsupportedtypeexception.h"


namespace sdb {

/*
 * Represents file with relation
 *
 * a hill of cruthes and suffering
 *
 * yare yare daze
*/


class RelationFile
{
public:
    // open relation file in path
    RelationFile(const std::string relationPath);
    RelationFile(const RelationFile& rf) : path(rf.path)
    {
        file.open(rf.path, std::ios_base::binary
                           | std::ios_base::in
                           | std::ios_base::out);
    }
    ~RelationFile();

    // eq to 'select * from relation'
    Relation select();

    // eq to 'delete from relation where <predicate>'
    void deleteFrom(
        std::function<bool(const std::vector<std::shared_ptr<Any>>&)> predicate
    );

    // eq to 'insert into relation values v1, v2, vn'
    void insert(const Relation& inputRelation);

    // construct relation file with scheme {header, types} in path
    static RelationFile createRelationFile(
            const Header& header, const Types& types,
            const std::string& relationPath
    );

private:
    std::string path;
    std::fstream file;

    // read scheme from file
    // returns offset of body start
    size_t readScheme(sdb::Header& header, sdb::Types& types);

    // read body from file on offset
    void   readBody(size_t offset, size_t elementSize, sdb::Body& body);

    void   writeBody(const sdb::Body& body);
    void   writeScheme(const sdb::Header& header, const sdb::Types& types);

    // read primitive type, except string
    template <typename T>
    void read(T& what)
    {
        file.read((char*)&what, sizeof(what));
    }

    template <typename T>
    void write(T what)
    {
        file.write((char*)&what, sizeof(what));
    }

    void readCString (char * what, size_t whatSize)
    {
        file.read(what, whatSize);
    }

    void writeCString (const char * what, size_t whatSize)
    {
        file.write(what, whatSize);
        file.flush();
    }
};

/*
 * Structure of RelationFile:
 * scheme size = attributes count
 * scheme: header (size, char*), index (long), type (long)
 *
 * count of bodyElements
 * [bodyElements: field+]
 *
 * TODO: add indexing in future versions
*/

}

#endif // RELATIONFILE_H
