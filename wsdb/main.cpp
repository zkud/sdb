/*
 * Simple DataBase (SDB)
 * MIT license
 *
 * ver 1.0 beta
 *
 * author: L1ttl3S1st3r (check out my github)
 * date:   24.05.2019
 *
 * Special thanks to:
 *     Bazanov (make me feel stressed, so not bored)
*/

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
