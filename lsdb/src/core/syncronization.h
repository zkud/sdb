#ifndef SYNCRONIZATION_H
#define SYNCRONIZATION_H

#include <string>

#ifdef __linux__
#include <string>
#include <unistd.h>
#include <iostream>
#include <cstdio>
#include <vector>
#include <sys/wait.h>
#include <semaphore.h>
#include <fcntl.h>
#include <list>
#include <limits>
#include <string.h>

#define semaphore sem_t*
#elif _WIN32 | _WIN64
#include <Windows.h>
#endif

#define shitMessage(msg) {std::cout << "critical error:" << msg << std::endl;}

namespace sdb
{
    // create if not exist & enter CS
    void enterCS(std::string name);

    // leave cs
    void leaveCS(std::string name);

    // destroy cs if it exists
    void destroyCS(std::string name);

}

#endif // SYNCRONIZATION_H
