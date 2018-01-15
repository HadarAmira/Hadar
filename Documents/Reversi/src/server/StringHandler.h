/*
 * StringHandler.h
 *
 *  Created on: Dec 27, 2017
 *      Author: zvi
 */

#ifndef STRINGHANDLER_H_
#define STRINGHANDLER_H_

#include <sys/socket.h>
#include <netinet/in.h>
#include <unistd.h>

class StringHandler {
public:
	/**
	 * used to read string from client.
	 */
	static void readString(int client,int length, char* dest);
	/**
	 * used to write string to client.
	 */
	static void writeString(int client, int length, const char* source);
};

#endif /* STRINGHANDLER_H_ */
