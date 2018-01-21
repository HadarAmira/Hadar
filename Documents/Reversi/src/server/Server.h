
#include <thread_db.h>
#include "Executer.h"
#include "ThreadPool.h"

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
	CommandManager cm;
	int min,max;
    ThreadPool tPool;
};
#endif /* SERVER_H_ */

