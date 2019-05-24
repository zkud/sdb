#ifndef DATAMANAGER_H
#define DATAMANAGER_H

#include <fstream>
#include <string>
#include <functional>

#include "../core/relation.h"
#include "../core/syncronization.h"

#include "relationfile.h"

#include "../exceptions/filedoesntexistexception.h"
#include "../exceptions/toobignameexception.h"


#include <iostream>
#define semaphore sem_t*
#define shit(msg) {std::cout << msd << std::endl;}

namespace sdb {

/*
 * RelationFile add-on
 *
 * need for syncronization
 *
 * I wanted other structure, but fucking time waits nobody
*/
const std::string EXTENTION = ".rf";

class DataManager
{
public:
    // constructs relation from file
    // equvalent to 'select * from relationName;'
    Relation select(std::string relationName);

    // creates relation in database
    // header and types describes schema
    void createRelation(std::string relationName,
                        const sdb::Header& relationHeader,
                        const sdb::Types& relationHeaderTypes);
    // destroy relation
    void dropRelation(std::string relationName);

    // deletes nodes from relation, where predicate works
    void deleteFrom(
            std::string relationName,
            std::function<bool(const std::vector<std::shared_ptr<Any>>&)> predicate
    );

    // insert (merge and save) data into relation file
    void insert(std::string relationName,
                const Relation& inputRelation);
};

}

#endif // DATAMANAGER_H
