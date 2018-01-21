

#include <queue>
#include <pthread.h>
#include "ConnDet.h"

using namespace std;
#ifndef REVERSI_THREADPOOL_H
#define REVERSI_THREADPOOL_H


class ThreadPool {
public:
    ThreadPool(int threadsNum);

    void addTask(connDet *task);
    void terminate();
    virtual ~ThreadPool();

private:
    queue<connDet*> taskQueue;
    pthread_t* threads;
    void executeTasks();
    bool stopped;
    pthread_mutex_t lock;

    static void *execute(void *arg);

};


#endif //REVERSI_THREADPOOL_H
