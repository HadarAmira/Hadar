
#include "Command.h"

#ifndef STARTGAME_H_
#define STARTGAME_H_

class StartGame: public Command {

public:
	StartGame(GamesManager* games,pthread_mutex_t* mutex);
	/**
	 * adds the wanted game's name to the list
	 */
	virtual void execute(int client);
private:
	GamesManager* games;
	pthread_mutex_t* mutex;
};

#endif /* STARTGAME_H_ */
