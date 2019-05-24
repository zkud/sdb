#ifndef DIVOPERATION_H
#define DIVOPERATION_H

#include "operation.h"

namespace sdb {

class DivOperation : public sdb::Operation
{
public:
    DivOperation(CalculationStack& cstack) : Operation(cstack, "div")  {}

    void apply() {
        using sdb::Float64;
        using sdb::Integer;

        auto& cstack = Operation::stack;

        std::shared_ptr<Any> operand2 = std::dynamic_pointer_cast<Any>(cstack.back());
        cstack.pop_back();

        std::shared_ptr<Any> operand1 = std::dynamic_pointer_cast<Any>(cstack.back());
        cstack.pop_back();

        cstack.push_back(std::shared_ptr<Any>(
                             new Float64(
                                 convertToDouble(operand1) / convertToDouble(operand2)
                                 )
                             )
                         );
    }
};

}

#endif // DIVOPERATION_H
