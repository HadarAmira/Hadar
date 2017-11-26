/*
 * PlayerLogic.h
 * 305798752
 *  Created on: Nov 3, 2017
 *      Author: zvi
 */
#include <vector>
#include "Point.h"
#include "Graphic.h"
#include "PlayerSign.h"
using namespace std;

#ifndef PLAYERLOGIC_H_
#define PLAYERLOGIC_H_

class PlayerLogic {
public:
	/**
	 * let the player chose his next move
	 * g - used graphic
	 * other - the competitor
	 */
	virtual void playMove(Graphic *g,PlayerLogic* p2) = 0;
	/**
	 * returns - the sign of this player
	 */
	virtual PlayerSign getSign() const =0;
	/**
	 * returns true if the player has at least one possible move
	 */
	virtual bool hasPossibleMove() =0;
};

#endif /* PLAYERLOGIC_H_ */
