/*
 * FlipRule.h
 * 305798752
 *  Created on: Nov 4, 2017
 *      Author: zvi liebskind
 */
#include "Rule.h"
#include "PlayerLogic.h"

#ifndef FLIPRULE_H_
#define FLIPRULE_H_

class FlipRule: public Rule {
public:
	FlipRule();
	/**
	 * player - the player who want to move
	 * move - a point to put disk on
	 * board - the game board
	 * returns - true if the player could put disk on move
	 */
	bool validate(PlayerLogic* player, Point move, Board* board) const;
	/**
	 * player - the player who want to move
	 * move - a point to put disk on
	 * board - the game board
	 * returns - list of points that should change their char
	 */
	vector<Point>
			listChanges(PlayerLogic* player, Point move, Board* board) const;
};

#endif /* FLIPRULE_H_ */
