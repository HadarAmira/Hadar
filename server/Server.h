/*
 * Server.h
 *
 *  Created on: Dec 5, 2017
 *      Author: zvi
 */

#ifndef SERVER_H_
#define SERVER_H_

class Server {
public:
	Server(int port);
	void start();
	void stop();
private:
	int port;
	int serverSocket; // the socket's file descriptor
	void handleClient(int client1, int client2);
};
#endif /* SERVER_H_ */
