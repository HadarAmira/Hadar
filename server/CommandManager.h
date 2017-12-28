/*
 * CommandManager.h
 *
 *  Created on: Dec 25, 2017
 *      Author: zvi
 */
#include "Command.h"
#include <map>

#ifndef COMMANDMANAGER_H_
#define COMMANDMANAGER_H_

class CommandManager {
public:
	CommandManager();
	~CommandManager();
	/**
	 * find selected command in map and execute it.
	 */
	void executeCommand(int client);
private:
	map<int, Command *> commandsMap;
	GamesManager games;
	pthread_mutex_t mutex;
};

#endif /* COMMANDMANAGER_H_ */

