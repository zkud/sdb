#ifndef TEXT_H
#define TEXT_H

#include "anyclass.h"
#include <string>
#include <typeinfo>


#include "../exceptions/incorrectargsexception.h"

namespace sdb {

/*
 * String containter
*/

class Text : public sdb::AnyClass
{
public:
    Text(const std::string& initValue) : value(initValue) {}
    Text(const Text& initValue) : value(initValue.getValue()) {}
    ~Text() {}

    Text operator = (const Text& text)
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
        return types::TEXT;
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
            const Text& text = dynamic_cast<const Text&>(any);

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
            const Text& text = dynamic_cast<const Text&>(any);

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



#endif // TEXT_H
