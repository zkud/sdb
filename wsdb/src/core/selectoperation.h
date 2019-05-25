#ifndef SELECTOPERATION_H
#define SELECTOPERATION_H

#include <iostream>
#include "whereoperation.h"

#include "../fs/dm.h"

#include "integer.h"
#include "text.h"

#include "operation.h"
#include "relation.h"

namespace sdb {
class SelectOperation : public sdb::Operation
{
public:
    SelectOperation(CalculationStack& cstack,
                    int fieldsCount, int tablesCount,
                    bool where)
        : Operation(cstack, "select"),
          fieldsCount(fieldsCount), tablesCount(tablesCount),
          wherePresent(where)
    {

    }

    void apply()
    {
        using sdb::DataManager;
        auto& cstack = Operation::stack;
        sdb::CalculationStack additionalStack;

        // handle if where present
        if (wherePresent)
        {
            long cellsCount = 4;
            while(cellsCount --> 0)
            {
                additionalStack.push_front(cstack.back());
                cstack.pop_back();
            }
        }

        // get tables
        // get the first
        tablesCount--;
        std::string relationName = popNFromStack(cstack);

        DataManager dm;
        Relation relation = dm.select(relationName);

        // get other & multiply
        while(tablesCount --> 0)
        {
            std::string otherName = popNFromStack(cstack);

            relation.time(dm.select(otherName));
        }


        // do whereing
        if (wherePresent)
        {
            long cellsCount = 4;
            while(cellsCount --> 0)
            {
                cstack.push_back(additionalStack.front());
                additionalStack.pop_front();
            }

            auto whereOp = std::dynamic_pointer_cast<WhereOperation>(cstack.back());
            whereOp->setHandledRelation(&relation);
            cstack.pop_back();
            whereOp->apply();

            std::shared_ptr<Predicate> pred = \
                    std::dynamic_pointer_cast<Predicate>(cstack.back());
            cstack.pop_back();


            relation.where(pred->getValue());
        }

        // do projection
        if (fieldsCount > 0)
        {
            std::list<std::string> attributesList;

            while(!cstack.empty())
            {
                std::string attribute = popNFromStack(cstack);

                attributesList.push_back(attribute);
            }

            relation.projection(attributesList);
        }

        std::cout << std::endl
                  << relation.toString() << std::endl;
    }

private:
    // -1 is equal to select all
    int fieldsCount;
    int tablesCount;
    bool wherePresent;
};

}

#endif // SELECTOPERATION_H
