#include "syncronization.h"

void sdb::enterCS(std::__cxx11::string name)
{
#ifdef __linux__
    semaphore sem;

    if ((sem = sem_open(name.c_str(), O_CREAT, 0644, 1)) == SEM_FAILED)
    {
        shitMessage("semaphore doesn't work")
        return;
    }

    sem_wait(sem);
#elif _WIN32 | _WIN64
#endif
}

void sdb::leaveCS(std::__cxx11::string name)
{
#ifdef __linux__
    semaphore sem;

    if ((sem = sem_open(name.c_str(), O_CREAT, 0644, 1)) == SEM_FAILED)
    {
        shitMessage("semaphore doesn't work")
        return;
    }

    sem_post(sem);
#elif _WIN32 | _WIN64
#endif
}

void sdb::destroyCS(std::__cxx11::string name)
{
#ifdef __linux__
    sem_unlink(name.c_str());
#elif _WIN32 | _WIN64
#endif
}
