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
#define WRONG_NAME -3
#define DISCONNECTED -4
#define WAIT_FOR_CONNECTION 3
#define BLACK 1
#define WHITE 2
using namespace std;
JoinGame::JoinGame(GamesManager *games, pthread_mutex_t* mutex) :
	games(games), mutex(mutex) {
}

void JoinGame::execute(int client) {
	int n, length;
	//read name's length
	n = read(client, &length, sizeof(length));
	if (n == -1 || n == 0) {
		cout << "Error communicating with client" << endl;
		close(client);
		return;
	}
	//read game's name
	char name[length];
	StringHandler::readString(client, length, name);

	//find opponent and delete game from list
	pthread_mutex_lock(mutex);
	int client1 = games->popGame(name);
	pthread_mutex_unlock(mutex);
	//if name don't exist
	if (client1 == -1) {
		client1 = WRONG_NAME;
		write(client, &client1, sizeof(client1));
		close(client);
		return;
	}
	//free response listener
	n = 0;
	write(client, &n, sizeof(n));

	//start game
	cout << name << " started" << endl;
	handleClients(client1, client);

	//finish thread
	return;
}

void JoinGame::handleClients(int client1, int client2) {

	int move1 = BLACK;
	int move2 = -1;
	int n, n2;
	n = write(client1, &move1, sizeof(move1));
	n2 = write(client1, &move2, sizeof(move2));
	if (n * n2 <= 0) {
		move1 = DISCONNECTED;
		write(client2, &move1, sizeof(move1));
		write(client2, &move2, sizeof(move2));
		close(client1);
		close(client2);
		return;
	}
	move1 = WHITE;
	n = write(client2, &move1, sizeof(move1));
	n2 = write(client2, &move2, sizeof(move2));
	if (n * n2 <= 0) {
		move1 = DISCONNECTED;
		write(client1, &move1, sizeof(move1));
		write(client1, &move2, sizeof(move2));
		close(client1);
		close(client2);
		return;
	}
	int x, y;
	while (true) {
		// Reading player move
		n = read(client1, &x, sizeof(x));
		n2 = read(client1, &y, sizeof(y));
		if (n * n2 <= 0) {
			move1 = DISCONNECTED;
			write(client2, &move1, sizeof(move1));
			write(client2, &move2, sizeof(move2));
			break;
		}

		// Writing the move to other player
		n = write(client2, &x, sizeof(x));
		n2 = write(client2, &y, sizeof(y));
		if (n * n2 <= 0) {
			move1 = DISCONNECTED;
			write(client1, &move1, sizeof(move1));
			write(client1, &move2, sizeof(move2));
			break;
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

