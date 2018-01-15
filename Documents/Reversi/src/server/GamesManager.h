/*
 * GamesManager.h
 *
 *  Created on: Dec 28, 2017
 *      Author: zvi
 */

#include <vector>
#include <string>
using namespace std;
#ifndef GAMESMANAGER_H_
#define GAMESMANAGER_H_

class GamesManager {
public:
	GamesManager();
	/**
	 * insert game to list.
	 * return 0 of success -1 if name already exist
	 * name - game's name
	 * client - socket number of the host
	 */
	int pushGame(string name,int client);
	/**
	 * popGame from list and return host client's socket number
	 * if games is not found - returns -1
	 */
	int popGame(string name);
	vector<string>* getNames();
private:
	vector<string> names;
	vector<int> clients;
};

#endif /* GAMESMANAGER_H_ */
