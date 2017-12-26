/*
 * Command.h
 *
 *  Created on: Dec 25, 2017
 *      Author: zvi
 */

#include <map>
#include <string>
#include <sys/socket.h>
#include <netinet/in.h>
#include <unistd.h>
#include <pthread.h>
using namespace std;

#ifndef COMMAND_H_
#define COMMAND_H_

class Command {
public:
 virtual void execute(int destination) = 0;
 virtual ~Command() {}
};

#endif /* COMMAND_H_ */
