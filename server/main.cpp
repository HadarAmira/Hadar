/*
 * main.cpp
 *
 *  Created on: Dec 5, 2017
 *      Author: zvi
 */

#include "Server.h"
#include <iostream>
#include <stdlib.h>
using namespace std;
int main() {
	Server server("serverSettings");
	try {
		server.start();
	} catch (const char *msg) {
		cout << "Cannot start server. Reason: " << msg << endl;
		exit(-1);
	}
}
