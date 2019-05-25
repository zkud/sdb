#include "dm.h"

#ifdef __linux__
#include <unistd.h>
#include <stdio.h>
#elif _WIN32 | _WIN64
#include <Windows.h>
#endif

#include <iostream>

sdb::Relation sdb::DataManager::select(std::string relationName)
{
    // enter critical section
    enterCS(relationName);

    RelationFile rf(relationName + EXTENTION);

    Relation rel =  rf.select();

    // leave it
    leaveCS(relationName);

    return rel;
}

void sdb::DataManager::createRelation(std::string relationName, const sdb::Header &relationHeader, const sdb::Types &relationHeaderTypes)
{
    RelationFile rf = RelationFile::createRelationFile(
                relationHeader, relationHeaderTypes,
                relationName + EXTENTION
    );
}

void sdb::DataManager::dropRelation(std::string relationName)
{
    // enter critical section
    enterCS(relationName);

    // check if such relation exists
    // super - crutch
    {
        RelationFile rf(relationName + EXTENTION);
    }

    // leave it &
    // remove relation
    destroyCS(relationName);
#ifdef __linux__
    remove((relationName + EXTENTION).c_str());
#elif _WIN32 | _WIN64
    DeleteFileA((relationName + EXTENTION).c_str());
#endif
}

void sdb::DataManager::deleteFrom(std::string relationName, std::function<bool (const std::vector<std::shared_ptr<sdb::Any> > &)> predicate)
{
    // enter criritical section
    enterCS(relationName);

    RelationFile rf(relationName + EXTENTION);

    rf.deleteFrom(predicate);

    // leave it
    leaveCS(relationName);
}

void sdb::DataManager::insert(std::string relationName, const sdb::Relation &inputRelation)
{
    // enter critical section
    enterCS(relationName);

    RelationFile rf(relationName + EXTENTION);

    rf.insert(inputRelation);

    // leave it
    leaveCS(relationName);
}
