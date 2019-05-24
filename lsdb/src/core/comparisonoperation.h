#ifndef COMPARISONOPERATION_H
#define COMPARISONOPERATION_H

#include "predicate.h"
#include "name.h"
#include "integer.h"
#include "float64.h"
#include "text.h"

#include "relation.h"

#include "operation.h"

namespace sdb {

class ComparisonOperation : public sdb::Operation
{
public:
    ComparisonOperation(CalculationStack& cstack, long code) : Operation(cstack, "cmp"), code(code)  {}

    void apply()
    {
        using sdb::Integer;
        auto& cstack = Operation::stack;

        cstack.push_back(
                    std::shared_ptr<Any>(
                            new Integer(code)
                        )
                    );
    }

private:
    long code;
    /*
     * =     - 4
     * <=>   - 12 <- in future versions
     * >=    - 6
     * <=    - 5
     * <     - 1
     * >     - 2
     * != <> - 3
    */
};

}

#endif // COMPARISONOPERATION_H
