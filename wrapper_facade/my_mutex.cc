#include "my_mutex.h"

namespace my
{

mutex::mutex()
{
    pthread_mutex_init(&m, NULL);
}

mutex::~mutex()
{
    pthread_mutex_destroy(&m);
}

int mutex::lock()
{
    return pthread_mutex_lock(&m);
}

int mutex::unlock()
{
    return pthread_mutex_unlock(&m);
}

int mutex::trylock()
{
    return pthread_mutex_trylock(&m);
}

}

