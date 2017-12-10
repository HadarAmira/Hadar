/*
 * Client.h
 *
 */

#include <libio.h>
#include <fstream>
#include "Point.h"

#ifndef CLIENT_H_
#define CLIENT_H_

class Client {
public:
	Client();
	~Client();
	Client(char* serverIP, int serverPort);
	Client(const char* file);
	void connectToServer();
	void sendMove(Point move) const;
	Point getMove();
private:
	char* serverIP;
	int serverPort;
	int clientSocket;
};

#endif /* CLIENT_H_ */