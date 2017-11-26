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
	 * arrange the board to its original shape
	 */
	void initialize();
	/**
	 * returns the size of the board
	 */
	int getSize() const;
	/**
	 * returns the BoardSize enum
	 */
	int getBoardSize() const;
	/**
	 * returns the char at the wanted point
	 */
	PlayerSign getCharAt(int row, int col) const;
	/**
	 * returns the char at the wanted point
	 */
	PlayerSign getCharAt(Point& p) const;
	/**
	 * returns the char at the wanted point
	 */
	PlayerSign getCharAt(Point* p) const;
	/**
	 * move - a point to change
	 * player - the char to change to
	 */
	void setTile(Point& move, PlayerSign player);
	/**
	 * row - the row of the point to change
	 * col - the col of the point to change
	 * player - the sign to change to
	 */
	void setTile(int row, int col, PlayerSign player);
	/**
	 * this method checks the board lines and return true if it is the end of the board.
	 * @param i - row.
	 * @param j - column.
	 * @return true/false.
	 */
	bool boarderlines(int i, int j);
	/**
	 * origin - the board to duplicate
	 * return - a copy of origin
	 */
	static Board copy(const Board* origin);
	virtual ~Board();
private:
	PlayerSign** board;
	int size;
	PlayerSign sign1,sign2;
};

#endif /* BOARD_H_ */
