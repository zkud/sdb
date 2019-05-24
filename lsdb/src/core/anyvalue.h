#ifndef ANYVALUE_H
#define ANYVALUE_H

#include "any.h"

namespace sdb
{
/*
 * Base type for simple values (not classes or structures)
*/

    class AnyValue : public sdb::Any
    {
    public:
        virtual ~AnyValue() = 0;
    };

}

#endif // ANYVALUE_H
