/*
 * Command.h
 *
 *  Created on: Dec 25, 2017
 *      Author: zvi
 */

#include "GamesManager.h"
#include "StringHandler.h"
#include <pthread.h>
#include <iostream>
using namespace std;

#ifndef COMMAND_H_
#define COMMAND_H_

class Command {
public:
 virtual void execute(int client) = 0;
 virtual ~Command() {}
};

#endif /* COMMAND_H_ */
