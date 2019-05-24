/*
 * Simple DataBase (SDB)
 * MIT license
 *
 * ver 1.0 beta
 *
 * author: L1ttl3S1st3r (check out my github)
 * date:   todo
 *
 * Special thanks to:
 *     todo
*/

// todo:
// 2. add file system (real tables) 14
// 3. create multiple user sessions 14
// 4. test prog 15
// 5. make a report 15

// fix fs c_str security

// today plan:

// tasks:
// prepare for test, make a program
// task | priority | time
// test | c        | 2h
// prog | a        | xh

// POINT 1
// result:
// 1. prog
// 2. test

// POINT 2
// prog plan:
// 3. ctrl-c, ctrl-v to 2 commands: 1h
// 4. syncronization 1h
//
// 5 prepare for test 1h

// risk is our business

#include "src/tests.cpp"

#include <string>

int main(int argc, char **argv)
{
    if (argc >= 2)
    {
        if (!std::string(argv[1]).compare("io1"))
        {
            testIO();
        }

        if (!std::string(argv[1]).compare("io2"))
        {
            testIO2();
        }

        if (!std::string(argv[1]).compare("alg"))
        {
            testAlgebra();
        }

        if (!std::string(argv[1]).compare("par"))
        {
            testParser();
        }

        if (!std::string(argv[1]).compare("io3"))
        {
            testIO3();
        }
    }

    return 0;
}
