#ifndef INTEGER_H
#define INTEGER_H

#include "anyvalue.h"
#include <typeinfo>
#include <string>

#include "../exceptions/incorrectargsexception.h"

namespace sdb {

/*
 * Integer containter
*/

class Integer : public sdb::AnyValue
{
public:
    Integer(long int initValue) : value(initValue) {}
    Integer(const Integer& initValue) : value(initValue.getValue()) {}
    ~Integer() {}

    long int getValue() const
    {
        return value;
    }

    void setValue(const long int& newValue)
    {
        value = newValue;
    }

    std::string toString() const override
    {
        return std::to_string(value);
    }

    types::TypeIndex type() const override
    {
        return types::INTEGER;
    }

    bool operator ==(const Any& any) override
    {
        try
        {
            const Integer& integer = dynamic_cast<const Integer&>(any);

            return value == integer.getValue();
        }
        catch(std::bad_cast ex)
        {
            throw IncorrectArgsException("content of any is incorrect");
        }
    }

    bool operator <(const Any& any) override
    {
        try
        {
            const Integer& integer = dynamic_cast<const Integer&>(any);

            return value < integer.getValue();
        }
        catch(std::bad_cast ex)
        {
            throw IncorrectArgsException("content of any is incorrect");
        }
    }

private:
    long int value;
};

}

#endif // INTEGER_H
