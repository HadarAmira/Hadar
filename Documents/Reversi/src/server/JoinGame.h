/*
 * JoinGame.h
 *
 *  Created on: Dec 25, 2017
 *      Author: zvi
 */

#ifndef JOINGAME_H_
#define JOINGAME_H_

#include "Command.h"

class JoinGame: public Command {
public:
	JoinGame(map<string,int>* games,pthread_mutex_t* mutex);
	virtual void execute(int destination);
private:
	map<string,int>* games;
	pthread_mutex_t* mutex;
	void handleClients(int client1,int client2);
};

#endif /* JOINGAME_H_ */
