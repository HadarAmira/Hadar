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
	AIPlayer(PlayerSign sign, Game* game);
	void playMove(Graphic *g,PlayerSign p2);
	PlayerSign getSign() const;
	bool hasPossibleMove();
private:
	PlayerSign sign;
	Game* game;
	int countFlips(Board* board, PlayerSign p2);
};

#endif /* AIPLAYER_H_ */
