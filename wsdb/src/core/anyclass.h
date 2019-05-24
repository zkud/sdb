#ifndef ANYCLASS_H
#define ANYCLASS_H

#include "any.h"
namespace sdb {

/*
 * Base class for the all structures and classes
*/

class AnyClass : public sdb::Any
{
public:
    virtual ~AnyClass() = 0;
};

}


#endif // ANYCLASS_H
