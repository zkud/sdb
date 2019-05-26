#include "syncronization.h"

void sdb::enterCS(std::string name)
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
    HANDLE lock = CreateSemaphoreA(NULL, 0, 2, name.c_str());
    WaitForSingleObject(lock, INFINITE);
#endif
}

void sdb::leaveCS(std::string name)
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
    HANDLE lock = CreateSemaphoreA(NULL, 0, 2, name.c_str());
    ReleaseSemaphore(lock, 1, 0);
#endif
}

void sdb::destroyCS(std::string name)
{
#ifdef __linux__
    sem_unlink(name.c_str());
#elif _WIN32 | _WIN64
    // don't need, cuz semaphore dies when handle count = 0
#endif
}
