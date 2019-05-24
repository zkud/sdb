#ifndef FLOAT64_H
#define FLOAT64_H

#include "anyvalue.h"
#include <typeinfo>

#include <math.h>

#include "../exceptions/incorrectargsexception.h"

namespace sdb {

/*
 * Float64 container
*/

class Float64 : public sdb::AnyValue
{
public:
    Float64(double initValue) : value(initValue) {}
    Float64(const Float64& anouther) : value(anouther.getValue()) {}
    ~Float64() {}

    double getValue() const
    {
        return value;
    }

    void setValue(const double& newValue)
    {
        value = newValue;
    }

    std::string toString() const override
    {
        return std::to_string(value);
    }

    bool operator ==(const Any& any) override
    {
        try
        {
            const Float64& f64 = dynamic_cast<const Float64&>(any);

            const double eps = 0.00001;
            double abs = (value - f64.getValue());
            abs = abs > 0? abs : -abs;

            return abs < eps;
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
            const Float64& f64 = dynamic_cast<const Float64&>(any);

            return value < f64.getValue();
        }
        catch(std::bad_cast ex)
        {
            throw IncorrectArgsException("content of any is incorrect");
        }
    }


    types::TypeIndex type() const override
    {
        return types::FLOAT64;
    }

private:
    double value;
};

}

#endif // FLOAT64_H
