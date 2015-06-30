#ifndef __MY_MUTEX_H__
#define __MY_MUTEX_H__

#include <pthread.h>

namespace my
{

class mutex
{
public:
    mutex();
    ~mutex();
    int lock();
    int unlock();
    int trylock();
private:
    pthread_mutex_t m;
};

}
#endif
