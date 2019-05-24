#ifndef TOOBIGNAMEEXCEPTION_H
#define TOOBIGNAMEEXCEPTION_H

#include <stdexcept>
#include <string>

namespace sdb {

/*
 * Occures, when name of some attribute is too big to handle
*/

class TooBigNameException : public std::length_error
{
public:
    TooBigNameException(const std::string& what) : std::length_error(what)
    {
    }
};

}
#endif // TOOBIGNAMEEXCEPTION_H
