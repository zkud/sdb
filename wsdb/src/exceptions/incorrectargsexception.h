#ifndef INCORRECTARGSEXCEPTION_H
#define INCORRECTARGSEXCEPTION_H

#include <stdexcept>
#include <string>

namespace sdb {

/*
 * Occures, when input args are invalid
*/

class IncorrectArgsException : public std::invalid_argument
{
public:
    IncorrectArgsException(const std::string& what) : std::invalid_argument(what)
    {
    }
};
}

#endif // INCORRECTARGSEXCEPTION_H
