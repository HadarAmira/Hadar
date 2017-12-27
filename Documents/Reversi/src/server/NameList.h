

#ifndef REVERSI_NAMELIST_H
#define REVERSI_NAMELIST_H

#include "Command.h"


class NameList: public Command {

    public:
        NameList(map<string,int>* games,pthread_mutex_t* mutex);
        virtual void execute(int destination);
    private:
        map<string,int>* games;
        pthread_mutex_t* mutex;


};


#endif //REVERSI_NAMELIST_H
