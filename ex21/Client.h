/*
 * Client.h
 *
 *  Created on: Dec 5, 2017
 *      Author: zvi
 */

#include "Point.h"

#ifndef CLIENT_H_
#define CLIENT_H_

class Client {
public:
	Client();
	Client(const char *serverIP, int serverPort);
	void connectToServer();
	void sendMove(Point move) const;
	Point getMove();
private:
	const char *serverIP;
	int serverPort;
	int clientSocket;
};

#endif /* CLIENT_H_ */
