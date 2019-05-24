#ifndef ANY_H
#define ANY_H

#include <string>

/*
 * The most common type
*/

namespace sdb {

/*
 * std::typeindex or typeinfo are shit,
 * because they aren't seriarelizable and ect
 *
 * so I used a such crutch
*/
namespace types {

enum TypeIndex
{
    INTEGER = 228,
    FLOAT64 = 1337,
    TEXT    = 123,

    OPERATION = 1,

    PREDICATE = 777,

    NAME    = 555,
    OTHER   = 1111
};

}

class Any
{
public:
    virtual ~Any() = 0;

    virtual std::string toString() const
    {
        return "";
    }

    virtual bool operator == (const Any& any) = 0;

    virtual bool operator < (const Any& any) = 0;

    virtual types::TypeIndex type() const
    {
        return types::OTHER;
    }
};

}

#endif // ANY_H
