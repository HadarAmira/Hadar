/*
 * StartGame.cpp
 *
 *  Created on: Dec 25, 2017
 *      Author: zvi
 */

#include "StartGame.h"

StartGame::StartGame(map<string, int>* games, pthread_mutex_t* mutex) :
	games(games), mutex(mutex) {
}

void StartGame::execute(int destination) {
	//read game's name
	char name[50];
	read(destination, &name, sizeof(name));
	//add game to list
	pthread_mutex_lock(mutex);
	games->insert(pair<char*, int> (name, destination));
	pthread_mutex_unlock(mutex);
	//client is waiting for opponent
	const char* message = "Waiting for other player...";
	write(destination, &message, sizeof(message));
	//end thread
	return;
}
