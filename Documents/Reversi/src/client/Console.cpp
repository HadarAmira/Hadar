/*
 * Console.cpp
 *
 *  Created on: Nov 7, 2017
 *      Author: zvi
 */

#include <iostream>
#include "Console.h"
using namespace std;
Console::Console() {

}

Graphic::~Graphic() {

}

void Console::printPoint(Point p) const {
	cout << "(" << p.getRow() + 1 << "," << p.getCol() + 1 << ")";
}

void Console::print(string& s) const {
	cout << s;
}

void Console::print(int i) const {
	cout << i;
}

void Console::print(char c) const {
	cout << c;
}

void Console::print(char* c) const {
	cout << c;
}

void Console::printBoard(Board* board) const {
	char tile;

	//print header
	cout << " |";
	for (int i = 1; i <= board->getSize(); i++) {
		cout << " " << i << " |";
	}
	cout << endl;
	//print board
	for (int i = 0; i < board->getSize(); i++) {
		//print separator line
		for (int k = 0; k < board->getSize() * 4 + 2; k++) {
			cout << '-';
		}
		cout << endl;
		//print line
		cout << i + 1 << '|';
		for (int j = 0; j < board->getSize(); j++) {
			tile = board->getCharAt(i, j);
			cout << ' ' << tile << " |";
		}
		cout << endl;
	}
}

void Console::notifyWinner(PlayerSign w) const {
	cout << (char)w << ": You are the winner." << endl;
}

string Console::getInput() {
	string s;
	cin >> s;

	return s;
}

void Console::breakLine() const {
	cout << endl;
}

