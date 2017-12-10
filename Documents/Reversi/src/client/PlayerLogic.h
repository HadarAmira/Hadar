/*
 * PlayerLogic.h
 */
#include <vector>
#include "Point.h"
#include "Graphic.h"
#include "PlayerSign.h"
#include "Game.h"
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
	/**
	 * p - the other player's chosen move
	 */
	virtual void notifyMove(Point p) const = 0;
	virtual ~PlayerLogic();
};

#endif /* PLAYERLOGIC_H_ */
