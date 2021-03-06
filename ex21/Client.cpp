/*
 * Client.cpp
 *
 *  Created on: Dec 5, 2017
 *      Author: zvi
 */

#include "Client.h"
#include <iostream>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <netdb.h>
#include <string.h>
#include <unistd.h>
using namespace std;

Client::Client() :
	serverIP(0), serverPort(0), clientSocket(0) {
}
Client::Client(const char *serverIP, int serverPort) :
	serverIP(serverIP), serverPort(serverPort), clientSocket(0) {

}
void Client::connectToServer() {
	// Create a socket point
	clientSocket = socket(AF_INET, SOCK_STREAM, 0);
	if (clientSocket == -1) {
		throw "Error opening socket";
	}
	// Convert the ip string to a network address
	struct in_addr address;
	if (!inet_aton(serverIP, &address)) {
		throw "Can't parse IP address";
	}
	// Get a hostent structure for the given host address
	struct hostent *server;
	server = gethostbyaddr((const void *) &address, sizeof address, AF_INET);
	if (server == NULL) {
		throw "Host is unreachable";
	}
	// Create a structure for the server address
	struct sockaddr_in serverAddress;
	bzero((char *) &address, sizeof(address));
	serverAddress.sin_family = AF_INET;
	memcpy((char *) &serverAddress.sin_addr.s_addr, (char *) server->h_addr,
			server->h_length);
	// htons converts values between host and network byte orders
	serverAddress.sin_port = htons(serverPort);
	// Establish a connection with the TCP server
	if (connect(clientSocket, (struct sockaddr *) &serverAddress,
			sizeof(serverAddress)) == -1) {
		throw "Error connecting to server";
	}
	cout << "Connected to server" << endl;
}
void Client::sendMove(Point move) const{
	int n,n2;
	int x = move.getRow();
	int y = move.getCol();
	n = write(clientSocket, &x, sizeof(x));
	n2 = write(clientSocket, &y, sizeof(y));
	if (n == -1 || n2==-1) {
		throw "Error writing move to socket";
	}


}

Point Client::getMove(){

	// Read the point from the server
	int n,n2;
	int x,y;
	n = read(clientSocket, &x, sizeof(x));
	n2 = read(clientSocket, &y, sizeof(y));
	if (n == -1 || n2==-1) {
		throw "Error reading move from socket";
	}

	return Point(x,y);
}
