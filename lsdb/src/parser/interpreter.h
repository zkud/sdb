#ifndef INTERPRETER_H
#define INTERPRETER_H

#include "pmysql.tab.hpp"
#include "../core/any.h"
#include "../core/operation.h"
#include <memory>
#include <list>

//extern "C"
//{
//    int yyparse(void);
//    int yylex(void);
//}

namespace sdb {
class Interpreter
{
public:
    Interpreter();

    void work();
    /*
     * Sorry for that, but it's the only way to integrate flex & bison c variant + Interpreter
     *
     * stack of operands and operators to interpret a sql query
    */
    static std::list<std::shared_ptr<sdb::Any>> interpreterStack;
    static bool continueWork;
};


}

#endif // INTERPRETER_H
