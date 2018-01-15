

#ifndef REVERSI_NAMELIST_H
#define REVERSI_NAMELIST_H


#include "Command.h"


class NameList: public Command {

    public:
        NameList(GamesManager* games,pthread_mutex_t* mutex);
        /**
         * sends list of game names to the client
         */
        virtual void execute(int client);
    private:
        GamesManager* games;
        pthread_mutex_t* mutex;


};


#endif //REVERSI_NAMELIST_H
