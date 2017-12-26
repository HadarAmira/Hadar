/*
 * CommandManager.cpp
 *
 *  Created on: Dec 25, 2017
 *      Author: zvi
 */
#include "StartGame.h"
#include "NameList.h"
#include "JoinGame.h"
#include "CommandManager.h"
#define START 1
#define JOIN 2
#define LIST 3

CommandManager::CommandManager() {
	pthread_mutex_t mutex;
	commandsMap[START] = new StartGame(&games,&mutex);
	commandsMap[JOIN] = new JoinGame(&games,&mutex);
	commandsMap[LIST] = new NameList(&games,&mutex);

}
void CommandManager::executeCommand(int destination) {
	int option;
	read(destination, &option, sizeof(option));
	Command *commandObj = commandsMap[option];
	commandObj->execute(destination);
}
CommandManager::~CommandManager() {
	map<int, Command *>::iterator it;
	for (it = commandsMap.begin(); it != commandsMap.end(); it++) {
		delete it->second;
	}
}

