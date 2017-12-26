/*
 * CommandManager.h
 *
 *  Created on: Dec 25, 2017
 *      Author: zvi
 */
#include "Command.h"

#ifndef COMMANDMANAGER_H_
#define COMMANDMANAGER_H_

class CommandManager {
public:
	CommandManager();
	~CommandManager();
	void executeCommand(int destination);
private:
	map<int, Command *> commandsMap;
	map<string, int> games;
};

#endif /* COMMANDMANAGER_H_ */

