
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
<<<<<<< HEAD
    ThreadPool tPool;
=======

>>>>>>> c9ce2ab50e2d97902b326f0af4a958cf7261a42b
};
#endif /* SERVER_H_ */

