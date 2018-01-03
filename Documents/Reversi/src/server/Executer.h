/*
 * Executer.h
 *
 *  Created on: Dec 25, 2017
 *      Author: zvi
 */

#include "ConnDet.h"

#ifndef EXECUTER_H_
#define EXECUTER_H_

class Executer {
public:
	virtual ~Executer();
	/**
	 * static method to access command manager.
	 */
	static void* run(void* det);
	static void* start(void* stop);
private:
	Executer();
};


#endif /* EXECUTER_H_ */
