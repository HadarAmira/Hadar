/*
 * Server.cpp
 *
 *  Created on: Dec 5, 2017
 *      Author: zvi
 */

#include "Server.h"
#include <sys/socket.h>
#include <netinet/in.h>
#include <unistd.h>
#include <string.h>
#include <iostream>
#include <stdio.h>
#include <fstream>

using namespace std;
#define MAX_CONNECTED_CLIENTS 2
#define NO_MOVE -1
#define END -2
#define WAIT_FOR_CONNECTION 3
#define BLACK 1
#define WHITE 2
Server::Server(int port) :
	port(port), serverSocket(0) {
	cout << "Server" << endl;
}
Server::Server(const char* files) {
    ifstream file;
    file.open(files, ios::in);
    if(!file.is_open())
        throw "Error while opening the file";
    else {
        file >> port;
        serverSocket=0;
    }
}
void Server::start() {
	// Create a socket point
	serverSocket = socket(AF_INET, SOCK_STREAM, 0);
	if (serverSocket == -1) {
		throw "Error opening socket";
	} // Assign a local address to the socket
	struct sockaddr_in serverAddress;
	bzero((void *) &serverAddress, sizeof(serverAddress));
	serverAddress.sin_family = AF_INET;
	serverAddress.sin_addr.s_addr = INADDR_ANY;
	serverAddress.sin_port = htons(port);
	if (bind(serverSocket, (struct sockaddr *) &serverAddress,
			sizeof(serverAddress)) == -1) {
		throw "Error on binding";
	}
	// Start listening to incoming connections
	listen(serverSocket, MAX_CONNECTED_CLIENTS);
	// Define the client socket's structures
	struct sockaddr_in clientAddress;
	socklen_t clientAddressLen;
	int client1, client2, n;
	int message;
	while (true) {
		cout << "Waiting for client connections..." << endl;
		// Accept a new client connection
		client1 = accept(serverSocket, (struct sockaddr *) &clientAddress,
				&clientAddressLen);
		if (client1 == -1)
			throw "Error on accept";
		message = WAIT_FOR_CONNECTION;
		n = write(client1, &message, sizeof(message));
		message = -1;
		n = write(client1, &message, sizeof(message));
		if (n == -1)
			throw "Error on writing";
		cout << "Client 1 connected" << endl;
		client2 = accept(serverSocket, (struct sockaddr *) &clientAddress,
				&clientAddressLen);
		if (client2 == -1)
			throw "Error on accept";
		cout << "Client 2 connected" << endl;
		handleClient(client1, client2);
		// Close communication with the client
		close(client1);
		close(client2);
	}

}

// Handle requests from a specific client
void Server::handleClient(int client1, int client2) {

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
}

void Server::stop() {
	close(serverSocket);
}
