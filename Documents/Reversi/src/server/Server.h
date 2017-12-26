/*
 * Server.h
 *
 *  Created on: Dec 5, 2017
 *      Author: zvi
 */
#include "Executer.h"
#ifndef SERVER_H_
#define SERVER_H_

class Server {
public:
	Server(int port);
	Server(const char* files);
	void start();
	void stop();
private:
	int port;
	int serverSocket; // the socket's file descriptor
	void handleClient(int client1, int client2);
	CommandManager cm;
};
#endif /* SERVER_H_ */
