#include "operation.h"

sdb::Operation::~Operation()
{

}
namespace sdb
{

double popFFromStack(CalculationStack &stack)

{
    double value = \
            std::dynamic_pointer_cast<sdb::Float64>(stack.back())->getValue();

    stack.pop_back();

    return value;
}

long popIFromStack(CalculationStack &stack)
{
    long value = \
            std::dynamic_pointer_cast<sdb::Integer>(stack.back())->getValue();

    stack.pop_back();

    return value;
}

std::string popSFromStack(CalculationStack &stack)
{
    std::string string = \
            std::dynamic_pointer_cast<sdb::Text>(stack.back())->getValue();

    stack.pop_back();

    return string;
}

long convertToLong(std::shared_ptr<Any> anyPtr)
{
    std::shared_ptr<Integer> intPtr = std::dynamic_pointer_cast<Integer>(anyPtr);

    return intPtr->getValue();
}

double convertToDouble(std::shared_ptr<Any> anyPtr)
{
    if (anyPtr->type() == sdb::types::INTEGER)
    {
        std::shared_ptr<Integer> intPtr = std::dynamic_pointer_cast<Integer>(anyPtr);

        return (double) intPtr->getValue();
    }
    else
    {
        std::shared_ptr<Float64> flPtr = std::dynamic_pointer_cast<Float64>(anyPtr);

        return flPtr->getValue();
    }
}

std::string popNFromStack(CalculationStack &stack)
{
    std::string string = \
            std::dynamic_pointer_cast<sdb::Name>(stack.back())->getValue();

    stack.pop_back();

    return string;

}

}
