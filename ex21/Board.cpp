/*
 * Board.cpp
 *
 *  Created on: Nov 3, 2017
 *      Author: zvi
 */

#include "Board.h"
using namespace std;
Board::Board(BoardSize& size,char sign1,char sign2): size(size), sign1(sign1),sign2(sign2){
	board = new char*[size];
	for(int i=0 ; i<size ; ++i)
		board[i] = new char[size];

	initialize();
}

void Board::initialize(){
	for (int i = 0; i < size; ++i) {
		for (int j = 0; j < size; ++j) {
			if ((i == 3 && j == 3) || (i == 4 && j == 4)) {
				board[i][j] = sign1;
			} else if ((i == 3 && j == 4) || (i == 4 && j == 3)) {
				board[i][j] = sign2;
			} else {
				board[i][j] = ' ';
			}
		}
	}
}

int Board::getSize() const {
	return size;
}

char Board::getCharAt(int row, int col) const {
	return board[row][col];
}

char Board::getCharAt(Point& p) const {
	return board[p.getRow()][p.getCol()];
}

char Board::getCharAt(Point *p) const {
	return board[p->getRow()][p->getCol()];
}

void Board::setTile(Point& move, char player){
	board[move.getRow()][move.getCol()]=player;
}

Board::~Board() {
	for(int i=0 ; i<size ; i++)
		delete[](board[i]);

	delete[] board;

}

