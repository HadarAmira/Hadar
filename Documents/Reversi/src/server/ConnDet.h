
#include "CommandManager.h"

#ifndef CONNDET_H_
#define CONNDET_H_

/**
 * holds needed information to execute a command
 */
struct connDet {
	CommandManager* cm;
	int client;
} ;

#endif /* CONNDET_H_ */
