/*
 * Console.h
 *
 *  Created on: Nov 7, 2017
 *      Author: zvi
 */

#include <string>
#include "Board.h"
#include "Graphic.h"

#ifndef CONSOLE_H_
#define CONSOLE_H_

class Console : public Graphic {
public:
	Console();
	/**
	 * board - the board to print
	 */
	void printBoard(Board* board) const;
	/**
	 * p - a poin to print
	 */
	void printPoint(Point p) const;
	/**
	 * s - the string to print
	 */
	void print(string& s) const;
	/**
	 * c - a char to print
	 */
	void print(char c) const;
	/**
	 * c - a string to print
	 */
	void print(char* c) const;
	/**
	 * print a line break
	 */
	void breakLine() const ;
	/**
	 * returns user input
	 */
	string getInput();
};

#endif /* CONSOLE_H_ */
