/*
 * Board.h
 *
 *  Created on: Nov 24, 2017
 *      Author: zvi
 */

#include "PlayerSign.h"
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
	Board(int size, PlayerSign sign1, PlayerSign sign2);
	/**
	 * copy constructor
	 * origin - a board to copy
	 */
	Board(Board* origin);
	/**
	 * arrange the board to its starting shape
	 */
	void initialize();
	/**
	 * returns the size of the board
	 */
	int getSize() const;
	/**
	 * returns the char at the wanted point
	 */
	PlayerSign getCharAt(int row, int col) const;
	/**
	 * returns the char at the wanted point
	 */
	PlayerSign getCharAt(Point& p) const;
	/**
	 * move - a point to change
	 * player - the sign to change to
	 */
	void setTile(Point& move, PlayerSign player);
	/**
	 * row - the row of the point to change
	 * col - the col of the point to change
	 * player - the sign to change to
	 */
	void setTile(int row, int col, PlayerSign player);
	virtual ~Board();
private:
	PlayerSign** board;
	int size;
	PlayerSign sign1, sign2;
};

#endif /* BOARD_H_ */
