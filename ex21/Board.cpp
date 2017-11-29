/*
 * Board.cpp
 *
 *  Created on: Nov 24, 2017
 *      Author: zvi
 */

#include "Board.h"
#include <iostream>
using namespace std;
Board::Board(int size, PlayerSign sign1, PlayerSign sign2) :
	size(size), sign1(sign1), sign2(sign2) {
	board = new PlayerSign*[size];
	for (int i = 0; i < size; ++i)
		board[i] = new PlayerSign[size];
}

Board::Board(Board *origin) :
	size(origin->getSize()), sign1(origin->sign1), sign2(origin->sign2) {

	board = new PlayerSign*[size];
	for (int i = 0; i < size; ++i)
		board[i] = new PlayerSign[size];

	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			setTile(i, j, origin->getCharAt(i, j));
		}
	}
}

int Board::getSize() const {
	return size;
}

PlayerSign Board::getCharAt(int row, int col) const {
	return board[row][col];
}

void Board::initialize() {
	for (int i = 0; i < size; ++i) {
		for (int j = 0; j < size; ++j) {
			if ((i == (size / 2) - 1 && j == (size / 2) - 1) || (i == size / 2
					&& j == size / 2)) {
				board[i][j] = sign1;
			} else if ((i == (size / 2) - 1 && j == size / 2) || (i == size / 2
					&& j == (size / 2) - 1)) {
				board[i][j] = sign2;
			} else {
				PlayerSign s = _;
				board[i][j] = s;
			}
		}
	}
}

PlayerSign Board::getCharAt(Point & p) const {
	return board[p.getRow()][p.getCol()];
}

void Board::setTile(int row, int col, PlayerSign player) {
	board[row][col] = player;
}

void Board::setTile(Point & move, PlayerSign player) {
	board[move.getRow()][move.getCol()] = player;
}

Board::~Board() {
	for (int i = 0; i < size; i++)
		delete[] (board[i]);

	delete[] board;
}
