/*
 * Board.h
 * 305798752
 *  Created on: Nov 3, 2017
 *      Author: zvi liebskind
 */

#include "BoardSize.h"
#include "Point.h"

#ifndef BOARD_H_
#define BOARD_H_

class Board {

public:
	/**
	 * creates the game board.
	 * size - the wanted size of the board
	 * sign1 - a sign that represents player1
	 * sign2 - a sign that represents player2
	 */
	Board(BoardSize& size, char sign1, char sign2);
	/**
	 * arrange the board to its original shape
	 */
	void initialize();
	/**
	 * returns the size of the board
	 */
	int getSize() const;
	/**
	 * returns the char at the wanted point
	 */
	char getCharAt(int row, int col) const;
	/**
	 * returns the char at the wanted point
	 */
	char getCharAt(Point& p) const;
	/**
	 * returns the char at the wanted point
	 */
	char getCharAt(Point* p) const;
	/**
	 * move - a point to change
	 * player - the char to change to
	 */
	void setTile(Point& move, char player);
	virtual ~Board();
private:
	char** board;
	BoardSize size;
	char sign1;
	char sign2;
};

#endif /* BOARD_H_ */
