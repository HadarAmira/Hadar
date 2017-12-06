/*
 * AIPlayer.h
 *
 *  Created on: Nov 27, 2017
 *      Author: zvi
 */

#ifndef AIPLAYER_H_
#define AIPLAYER_H_

#include "PlayerLogic.h"


class AIPlayer: public PlayerLogic {

public:
	/**
	 * creates a new AI player
	 * sign - the the sign of the player
	 * game - the current game
	 */
	AIPlayer(PlayerSign sign, Game* game);
	void playMove(Graphic *g,PlayerLogic* p2);
	PlayerSign getSign() const;
	bool hasPossibleMove();
	void notifyMove(Point p) const;
private:
	PlayerSign sign;
	Game* game;
	int countFlips(Board* board, PlayerSign p2);
};

#endif /* AIPLAYER_H_ */
