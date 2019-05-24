#ifndef INSERTOPERATION_H
#define INSERTOPERATION_H

#include "operation.h"

#include "name.h"
#include "text.h"
#include "integer.h"
#include "float64.h"

#include "../fs/dm.h"
#include "relation.h"
#include <map>

#include "../exceptions/incorrectargsexception.h"

#include <iostream>
#define debug(msg) {std::cout << "debug:" << msg << std::endl;}

namespace sdb {

class InsertOperation : public sdb::Operation
{
public:
    InsertOperation(CalculationStack& cstack, int countOfRecords)
        : Operation(cstack, "insert"), countOfRecords(countOfRecords)
    {

    }

    void apply()
    {
        auto& cstack = Operation::stack;
        sdb::DataManager dm;

        // get relation to insert name, form header, types, declare body
        std::string relationName = popNFromStack(cstack);
        Relation currentRelation = dm.select(relationName);
        Header header = currentRelation.getHeader();
        size_t elemSize = header.size();

        Types  htypes = currentRelation.getTypes();
        Body   body(countOfRecords);

        // shitIndex -> goodIndex
        std::map<size_t, size_t> shitIndexes;

        // form map to make correct indexes
        size_t counter = 0;
        for (auto& el : cstack)
        {
            // size of header occured
            if (el->type() == types::INTEGER)
            {
                break;
            }
            else
            {
                std::string attribute = std::dynamic_pointer_cast<Name>(el)->getValue();

                shitIndexes.emplace(
                            std::make_pair(
                                counter,
                                currentRelation.indexOfAttribute(attribute)
                                )
                );
            }
            counter++;
        }

        // construct body to input
        for (auto& el : body)
        {
            // get size of input tuple
            long argsCount = popIFromStack(cstack);

            if (argsCount != elemSize)
            {
                throw IncorrectArgsException("count of args isn\'t correct");
            }

            BodyElement element(elemSize);

            // transform it to vector
            while(argsCount --> 0)
            {
                element[argsCount] = cstack.back();
                cstack.pop_back();

            }

            el = element;
        }

        // fix order in body
        for (auto& el : body)
        {
            auto copy = el;

            for (auto& pair : shitIndexes)
            {
                el[pair.second] = copy[pair.first];
            }
        }

        Relation relation(header, body, htypes);


        // insert relation
        dm.insert(relationName, relation);
    }

private:
    int countOfRecords;
};

}

#endif // INSERTOPERATION_H
