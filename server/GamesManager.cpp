/*
 * GamesManager.cpp
 *
 *  Created on: Dec 28, 2017
 *      Author: zvi
 */

#include "GamesManager.h"

GamesManager::GamesManager() {

}

int GamesManager::pushGame(string name, int client) {
	//checks if name already exists
	for (vector<string>::iterator it = names.begin(); it != names.end(); ++it) {
		if ((*it).compare(name) == 0) {
			return -1;
		}
	}
	names.push_back(name);
	clients.push_back(client);
	return 0;
}

int GamesManager::popGame(string name) {
	int i = 0;
	for (vector<string>::iterator it = names.begin(); it != names.end(); ++it) {
		if ((*it).compare(name) == 0) {
			names.erase(it);
			vector<int>::iterator num = clients.begin() + i;
			clients.erase(num);
			return (*num);
		}
		i++;

	}

	return -1;
}

vector<string>* GamesManager::getNames() {
	return &names;
}

