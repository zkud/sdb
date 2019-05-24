#ifndef MULOPERATION_H
#define MULOPERATION_H

#include "operation.h"

namespace sdb {

class MulOperation : public sdb::Operation
{
public:
    MulOperation(CalculationStack& cstack) : Operation(cstack, "mul")  {}

    void apply() {
        using sdb::Float64;
        using sdb::Integer;

        auto& cstack = Operation::stack;

        std::shared_ptr<Any> operand2 = std::dynamic_pointer_cast<Any>(cstack.back());
        cstack.pop_back();

        std::shared_ptr<Any> operand1 = std::dynamic_pointer_cast<Any>(cstack.back());
        cstack.pop_back();

        // if one of operand is double, than result is double
        if ((operand1->type() == sdb::types::FLOAT64)
            || (operand2->type() == sdb::types::FLOAT64))
        {
            cstack.push_back(std::shared_ptr<Any>(
                                 new Float64(
                                        convertToDouble(operand1) * convertToDouble(operand2)
                                     )
                                 )
                             );
        }
        // else result if long
        else
        {
            cstack.push_back(std::shared_ptr<Any>(
                                 new Integer(
                                        convertToLong(operand1) * convertToLong(operand2)
                                     )
                                 )
                             );
        }
    }
};

}

#endif // MULOPERATION_H
