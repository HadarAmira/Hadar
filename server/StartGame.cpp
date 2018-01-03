/*
 * StartGame.cpp
 *
 *  Created on: Dec 25, 2017
 *      Author: zvi
 */

#include "StartGame.h"
#define WRONG_NAME -3
#define WAIT_FOR_CONNECTION 3

StartGame::StartGame(GamesManager* games, pthread_mutex_t* mutex) :
	games(games), mutex(mutex) {
}

void StartGame::execute(int client) {
	//read name's length
	int length, n;
	n = read(client, &length, sizeof(length));
	if (n == 0 || n == -1) {
		close(client);
		return;
	}
	//read game's name
	char name[length];
	StringHandler::readString(client, length, name);
	//add game to list
	pthread_mutex_lock(mutex);
	n = games->pushGame(name, client);
	pthread_mutex_unlock(mutex);
	//if name already exist
	if (n == -1) {
		n = WRONG_NAME;
		write(client, &n, sizeof(n));
		close(client);
		return;
	}
	cout << "Added game " << name << endl;
	//client is waiting for opponent
	n = WAIT_FOR_CONNECTION;
	write(client, &n, sizeof(n));

	//end thread
	return;
}
