

#include "Server.h"
#include <iostream>
#include <stdlib.h>
using namespace std;


static void* start(void* server);

int main() {
	Server server("serverSettings");

	cout << "Enter exit to stop server" << endl;

	pthread_t thread;
	Server* s = &server;
	pthread_create(&thread, NULL, &start,(void*)s );

	string str="";

	while(str.compare("exit")!=0){
		cin >> str;
	}

	server.stop();
}

static void* start(void* server){
	Server* ser = (Server*) server;

	try {
		ser->start();
	} catch (const char *msg) {
		cout << "Cannot start server. Reason: " << msg << endl;
		exit(-1);
	}
}
