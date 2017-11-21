/*
 * Graphic.h
 *
 *  Created on: Nov 7, 2017
 *      Author: zvi
 */

#include <string>
#include "Board.h"

#ifndef GRAPHIC_H_
#define GRAPHIC_H_

class Graphic {
public:
	virtual void printBoard(Board* board) const = 0;
	virtual void printPoint(Point p) const = 0;
	virtual void print(string& s) const = 0;
	virtual void print(char c) const = 0;
	virtual void print(char* c) const = 0;
	virtual void breakLine() const = 0;
	virtual string getInput() = 0;
	virtual ~Graphic();
};

#endif /* GRAPHIC_H_ */
