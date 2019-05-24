#ifndef FILEDOESNTEXISTEXCEPTION_H
#define FILEDOESNTEXISTEXCEPTION_H

#include <stdexcept>
#include <string>

namespace sdb {

/*
 * Occures, when somebody tryes to open a file, that doesn't exist
*/

class FileDoesntExistException : public std::runtime_error
{
public:
    FileDoesntExistException(const std::string& what) : std::runtime_error(what)
    {
    }
};
}


#endif // FILEDOESNTEXISTEXCEPTION_H
