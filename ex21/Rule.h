/*
 * Rule.h
 *
 *  Created on: Nov 24, 2017
 *      Author: zvi
 */
#include "Board.h"
#include "Point.h"
#include "PlayerSign.h"
#include <vector>

#ifndef RULE_H_
#define RULE_H_

class Rule {

public:
	/**
	 * player - the sign of the player who want to move
	 * move - a point to put disk on
	 * board - the game board
	 * returns - true if the player could put disk on move
	 */
	virtual bool validate(PlayerSign player,Point move, Board* board) const=0;
	/**
	 * player - the sign of the player who want to move
	 * move - a point to put disk on
	 * board - the game board
	 * returns - list of points that should change their char
	 */
	vector<Point>
	virtual listChanges(PlayerSign player, Point move, Board* board) const=0;
};

#endif /* RULE_H_ */
