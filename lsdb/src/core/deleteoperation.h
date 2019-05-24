#ifndef DELETEOPERATION_H
#define DELETEOPERATION_H

#include "../fs/dm.h"
#include "operation.h"
#include "predicate.h"
#include "whereoperation.h"

namespace sdb {

class DeleteOperation : public sdb::Operation
{
public:
    DeleteOperation(CalculationStack& cstack, bool where,
                    int tablesCount)
        : Operation(cstack, "delete"), tablesCount(tablesCount),
          wherePresent(where)  {}

    void apply()
    {
        using sdb::DataManager;
        auto& cstack = Operation::stack;
        sdb::CalculationStack additionalStack;

        // get table name
        tablesCount--;
        std::string relationName = popNFromStack(cstack);

        sdb::DataManager dm;

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

        if (wherePresent)
        {
            Relation relation = dm.select(relationName);

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

            dm.deleteFrom(relationName, pred->getValue());
        }
        else
        {
            auto deletePred = [&](const BodyElement& el) {return true;};

            dm.deleteFrom(relationName, deletePred);
        }
    }

private:
    int tablesCount; // always = 1, cuz beta
    bool wherePresent;
};

}

#endif // DELETEOPERATION_H
