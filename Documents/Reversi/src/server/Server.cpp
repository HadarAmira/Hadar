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
#include <iostream>
#include <stdio.h>
#include <string.h>
#include <fstream>

using namespace std;
#define MAX_CONNECTED_CLIENTS 10
Server::Server(int port) :
	port(port), serverSocket(0) {
	cm = CommandManager();
}

Server::Server(const char* files) {
	ifstream file;
	file.open(files, ios::in);
	if (!file.is_open())
		throw "Error while opening the file";
	else {
		file >> port;
		serverSocket = 0;
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
	long client;
	pthread_t thread;
	while (true) {
		//create new connection details for each client
		connDet connDetail;
		connDetail.cm = cm;
		cout << "Waiting for client connections..." << endl;
		// Accept a new client connection
		client = accept(serverSocket, (struct sockaddr *) &clientAddress,
				&clientAddressLen);
		connDetail.client = client;
		//handle command on different thread
		pthread_create(&thread, NULL, Executer::run, (void*) client);
	}

}

void Server::stop() {
	close(serverSocket);
}
