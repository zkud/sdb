#ifndef DROPOPERATION_H
#define DROPOPERATION_H

#include "operation.h"

#include "../fs/dm.h"

namespace sdb {

class DropOperation : public sdb::Operation
{
public:
    DropOperation(CalculationStack& cstack)
        : Operation(cstack, "drop")
    {}

    void apply()
    {
        auto& cstack = Operation::stack;

        // get relation name
        std::string relationName = popNFromStack(cstack);

        // drop it
        sdb::DataManager dm;
        dm.dropRelation(relationName);
    }
};

}
#endif // DROPOPERATION_H
