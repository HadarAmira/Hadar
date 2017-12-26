/*
 * JoinGame.cpp
 *
 *  Created on: Dec 25, 2017
 *      Author: zvi
 */

#include "JoinGame.h"
#include <iostream>
#define NO_MOVE -1
#define END -2
#define WAIT_FOR_CONNECTION 3
#define BLACK 1
#define WHITE 2
using namespace std;
JoinGame::JoinGame(map<string, int> *games, pthread_mutex_t* mutex) :
	games(games), mutex(mutex) {
}

void JoinGame::execute(int destination) {
	//read game's name
	char name[50];
	read(destination, &name, sizeof(name));

	//find opponent and delete game from list
	pthread_mutex_lock(mutex);
	int client1 = games->find(name)->second;
	games->erase(name);
	pthread_mutex_unlock(mutex);

	//start game
	handleClients(client1, destination);

	//finish thread
	return;
}

void JoinGame::handleClients(int client1, int client2) {

	int move1 = BLACK;
	int move2 = -1;
	int n;
	n = write(client1, &move1, sizeof(move1));
	n = write(client1, &move2, sizeof(move2));
	move1 = WHITE;
	n = write(client2, &move1, sizeof(move1));
	n = write(client2, &move2, sizeof(move2));

	int x, y;
	int n2;
	while (true) {
		// Reading player move
		n = read(client1, &x, sizeof(x));
		n2 = read(client1, &y, sizeof(y));
		if (n == -1 || n2 == -1) {
			cout << "Error reading point" << endl;
			return;
		}
		if (n == 0 || n2 == 0) {
			cout << "Client disconnected" << endl;
			return;
		}

		// Writing the move to other player
		n = write(client2, &x, sizeof(x));
		n = write(client2, &y, sizeof(y));

		if (n == -1) {
			cout << "Error writing to socket" << endl;
			return;
		}

		if (x != NO_MOVE) {
			client1 = client1 + client2; // x = both
			client2 = client1 - client2; // y = both-y -> y=x
			client1 = client1 - client2;//  x = both - x -> x=y
		}
		if (x == END)
			break;
	}

	// Close communication with the clients
	close(client1);
	close(client2);
}

