/*
 * Server.cpp
 *
 *  Created on: Dec 5, 2017
 *      Author: zvi
 */

#include "Server.h"
#include <iostream>
#include <stdio.h>
#include <fstream>
#include <string.h>

using namespace std;
#define MAX_CONNECTED_CLIENTS 1000
#define SERVER_CLOSED -5
Server::Server(int port) :
	port(port), serverSocket(0) {
	cm = CommandManager();
	min = 2000;
	max = -1;
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
	cout << "Server is listening..." << endl;
	// Define the client socket's structures
	struct sockaddr_in clientAddress;
	socklen_t clientAddressLen;
	long client;
	while (client != -1) {
		pthread_t thread;
		//create new connection details for each client
		connDet* connDetail = new connDet;
		connDetail->cm = &cm;
		// Accept a new client connection
		client = accept(serverSocket, (struct sockaddr *) &clientAddress,
				&clientAddressLen);
		max = client > max ? client : max;
		min = client < min ? client : min;
		if (client != -1) {
			cout << "Client " << client << " Connected." << endl;
			connDetail->client = client;
			//handle command on different thread
			pthread_create(&thread, NULL, Executer::run, (void *) connDetail);
		}
	}

}

void Server::stop() {
	int message = SERVER_CLOSED;
	for(int i=min;i<=max;i++){
		try{
			write(i, &message, sizeof(message));
			close(i);
		} catch (const char* msg){

		}
	}


	close(serverSocket);
	cout << "Stopped server" << endl;
}
