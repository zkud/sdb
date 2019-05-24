#ifndef OPERATION_H
#define OPERATION_H

#include "anyclass.h"

#include "integer.h"
#include "float64.h"
#include "text.h"
#include "name.h"

#include <list>
#include <memory>

namespace sdb {
    typedef std::list<std::shared_ptr<sdb::Any>> CalculationStack;

    double convertToDouble(std::shared_ptr<Any> anyPtr);
    long   convertToLong(std::shared_ptr<Any>   anyPtr);

    // helps in interpeting
    std::string popSFromStack(CalculationStack& stack);

    long popIFromStack(CalculationStack& stack);

    double popFFromStack(CalculationStack& stack);

    std::string popNFromStack(CalculationStack& stack);

class Operation : public sdb::AnyClass
{
public:
    Operation(CalculationStack& cstack, std::string opName)
        : stack(cstack), name(opName)
    {

    }

    virtual ~Operation() = 0;
    /*
     * apply an operation to stack of operations & args
    */
    virtual void apply() = 0;

    bool operator ==(const Any& any) override
    {
        return typeid(*this) == typeid(any);
    }

    types::TypeIndex type() const override
    {
        return types::OPERATION;
    }

    // Operation is incomparable now
    // (in future will be comparable by priority)
    bool operator <(const Any& any) override
    {
        return false;
    }

    std::string toString() const override
    {
        return std::string("Operation:") + name;
    }

protected:
    CalculationStack& stack;
    const std::string name;
};
}

#endif // OPERATION_H
