/*
 * PcPlayer.h
 * 305798752
 *  Created on: Nov 3, 2017
 *      Author: zvi
 */
#include "PlayerLogic.h"
using namespace std;


#ifndef PCPLAYER_H_
#define PCPLAYER_H_

class PcPlayer: public PlayerLogic {
public:
	/**
	 * creates a new local player
	 * sign - the char that represents the player on board
	 */
	PcPlayer(char sign);
	/**
	 * let the player chose his next move
	 * list - available moves
	 */
	Point chooseMove(vector<Point>& list,Graphic* g) const;
	/**
	 * returns - the sign of this player
	 */
	char getSign() const;
private:
	char sign;
};

#endif /* PCPLAYER_H_ */
