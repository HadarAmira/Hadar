

#include <iostream>
#include "NameList.h"


NameList::NameList(map<string, int>* games, pthread_mutex_t* mutex) :
        games(games), mutex(mutex) {
}

void NameList::execute(int destination) {

    pthread_mutex_lock(mutex);
    int size = games->size();
    write(destination, &size, sizeof(size));
    for(map<string,int>::iterator it = games->begin(); it != games->end(); ++it) {
        write(destination, &(it->first), 50);
    }
    pthread_mutex_unlock(mutex);
    close(destination);
}
