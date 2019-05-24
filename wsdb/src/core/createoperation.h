#ifndef CREATEOPERATION_H
#define CREATEOPERATION_H

#include "operation.h"

#include "../fs/dm.h"

#include "integer.h"
#include "text.h"
#include "relation.h"

namespace sdb {

class CreateOperation : public sdb::Operation
{
public:
    CreateOperation(CalculationStack& cstack)
        : Operation(cstack, "create")
    {}

    void apply()
    {
        using sdb::Header;
        using sdb::Types;

        auto& cstack = Operation::stack;

        // get name & scheme size
        std::string relationName = popNFromStack(cstack);
        long schemeSize = popIFromStack(cstack);

        Header header;
        Types  types;
        // construct scheme
        while(schemeSize --> 0)
        {
            std::string columnName = popNFromStack(cstack);
            header.emplace(std::make_pair(columnName, schemeSize));

            long typeCode = popIFromStack(cstack);
            types.emplace(std::make_pair(columnName, typeCode));
        }

        // create relation
        sdb::DataManager dm;
        dm.createRelation(relationName, header, types);
    }
};

}
#endif // CREATEOPERATION_H
