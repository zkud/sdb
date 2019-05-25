#ifndef UNSUPPORTEDTYPEEXCEPTION_H
#define UNSUPPORTEDTYPEEXCEPTION_H


#include <stdexcept>
#include <string>

namespace sdb {

/*
 * Occures, when usupported type occures
*/

class UnsupportedTypeException : public std::logic_error
{
public:
    UnsupportedTypeException(const std::string& what) : std::logic_error(what)
    {
    }
};

}

#endif // UNSUPPORTEDTYPEEXCEPTION_H
