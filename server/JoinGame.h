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
	JoinGame(GamesManager* games,pthread_mutex_t* mutex);
	/*
	 * reads to wanted name from client and starts the game
	 */
	virtual void execute(int client);
private:
	GamesManager* games;
	pthread_mutex_t* mutex;
	/**
	 * Handles the game procedure
	 */
	void handleClients(int client1,int client2);
};

#endif /* JOINGAME_H_ */
