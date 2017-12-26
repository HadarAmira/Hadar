/*
 * StartGame.h
 *
 *  Created on: Dec 25, 2017
 *      Author: zvi
 */
#include "Command.h"

#ifndef STARTGAME_H_
#define STARTGAME_H_

class StartGame: public Command {

public:
	StartGame(map<string,int>* games,pthread_mutex_t* mutex);
	virtual void execute(int destination);
private:
	map<string,int>* games;
	pthread_mutex_t* mutex;
};

#endif /* STARTGAME_H_ */
