#ifndef COLUMN_H
#define COLUMN_H

#include "anyclass.h"
#include <string>
#include <typeinfo>

#include "../exceptions/incorrectargsexception.h"

namespace sdb {

/*
 * Name container
*/

class Name : public sdb::AnyClass
{
public:
    Name(const std::string& initValue) : value(initValue) {}
    Name(const Name& initValue) : value(initValue.getValue()) {}
    ~Name() {}

    Name operator = (const Name& text)
    {
        // check for self-asignment
        if (&text != this)
        {
            value = text.getValue();
        }

        return *this;
    }

    types::TypeIndex type() const override
    {
        return types::NAME;
    }

    std::string getValue() const
    {
        return value;
    }

    void setValue(const std::string& newValue)
    {
        value = newValue;
    }

    std::string toString() const override
    {
        return value;
    }

    bool operator ==(const Any& any) override
    {
        try
        {
            const Name& text = dynamic_cast<const Name&>(any);

            return value == text.getValue();
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
            const Name& text = dynamic_cast<const Name&>(any);

            return value.compare(text.getValue()) < 0;
        }
        catch(std::bad_cast ex)
        {
            throw IncorrectArgsException("content of any is incorrect");
        }
    }

private:
    std::string value;
};

}


#endif // COLUMN_H
