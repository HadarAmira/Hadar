/*
 * StringHandler.cpp
 *
 *  Created on: Dec 27, 2017
 *      Author: zvi
 */

#include "StringHandler.h"

void StringHandler::readString(int client, int length, char *dest) {
	int sym;
	char c;
	for (int i = 0; i < length; i++) {
		read(client, &sym, sizeof(sym));
		c = (char) sym;
		dest[i] = c;
	}
}

void StringHandler::writeString(int client, int length, const char* source) {
	//write length
	write(client, &length, sizeof(length));
	int sym;
	for (int i = 0; i < length; i++) {
		sym = (int) source[i];
		write(client, &sym, sizeof(sym));
	}
}
