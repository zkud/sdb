#ifndef WHERE_H
#define WHERE_H

#include "predicate.h"
#include "name.h"
#include "integer.h"
#include "float64.h"
#include "text.h"

#include "relation.h"

#include "operation.h"
#include "comparisonoperation.h"

namespace sdb {

namespace binop {
    bool eq(std::shared_ptr<Any> a, std::shared_ptr<Any> b);
    bool eqb(std::shared_ptr<Any> a, std::shared_ptr<Any> b);

    bool eql(std::shared_ptr<Any> a, std::shared_ptr<Any> b);
    bool less(std::shared_ptr<Any> a, std::shared_ptr<Any> b);

    bool bigger(std::shared_ptr<Any> a, std::shared_ptr<Any> b);
    bool neq(std::shared_ptr<Any> a, std::shared_ptr<Any> b);
}

class WhereOperation : public sdb::Operation
{
public:
    WhereOperation(CalculationStack& cstack) : Operation(cstack, "where")  {}

    void apply()
    {
        using sdb::Float64;
        using sdb::Integer;

        auto& cstack = Operation::stack;

        enum Codes
        {
            EQ  = 4,
            EQB = 6,
            EQL = 5,
            L   = 1,
            B   = 2,
            NEQ = 3
        };

        // get compare code
        auto compareOp = std::dynamic_pointer_cast<ComparisonOperation>(cstack.back());
        cstack.pop_back();
        compareOp->apply();

        long code = popIFromStack(cstack);

        std::shared_ptr<Any> operand2 = std::dynamic_pointer_cast<Any>(cstack.back());
        cstack.pop_back();

        std::shared_ptr<Any> operand1 = std::dynamic_pointer_cast<Any>(cstack.back());
        cstack.pop_back();

        // prepare to form a predicate
        bool columnIn1 = operand1->type() == types::NAME;

        if(!columnIn1)
        {
            auto tmp = operand2;
            operand2 = operand1;
            operand1 = tmp;
        }

        switch(code)
        {
        case EQ:
            comparator = binop::eq;
            break;

        case EQB:
            if (columnIn1)
            {
                comparator = binop::eqb;
            }
            else
            {
                comparator = binop::eql;
            }
            break;

        case EQL:
            if (columnIn1)
            {
                comparator = binop::eql;
            }
            else
            {
                comparator = binop::eqb;
            }
            break;

        case L:
            if (columnIn1)
            {
                comparator = binop::less;
            }
            else
            {
                comparator = binop::bigger;
            }
            break;

        case B:
            if(columnIn1)
            {
                comparator = binop::bigger;
            }
            else
            {
                comparator = binop::less;
            }
            break;

        case NEQ:
            comparator = binop::neq;
            break;
        }

        size_t index = handledRelation->indexOfAttribute(
                            std::dynamic_pointer_cast<Name>(
                                operand1
                                )->getValue()
                            );

        // form a predicate
        auto pred = [&, index, operand2](const sdb::BodyElement& be)
        {
            return comparator(
                        be[index],
                        operand2
            );
        };

        // add it to stack
        cstack.push_back(
                std::shared_ptr<Any>(
                    new Predicate(
                        pred
                        )
                    )
                );

    }

    void setHandledRelation(Relation* rel)
    {
        handledRelation = rel;
    }

private:
    bool (*comparator)(std::shared_ptr<Any>, std::shared_ptr<Any>);
    Relation* handledRelation = 0;
};

}

#endif // WHERE_H
