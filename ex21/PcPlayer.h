/*
 * PcPlayer.h
 * 305798752
 *  Created on: Nov 3, 2017
 *      Author: zvi
 */
#include "PlayerLogic.h"
#include "Game.h"

#ifndef PCPLAYER_H_
#define PCPLAYER_H_

class PcPlayer: public PlayerLogic {
public:
	/**
	 * creates a new local player
	 * sign - the char that represents the player on board
	 * game - the current game
	 */
	PcPlayer(PlayerSign sign, Game* game);
	~PcPlayer();
	void playMove(Graphic *g,PlayerLogic* other);
	PlayerSign getSign() const;
	bool hasPossibleMove();
	void notifyMove(Point p) const;
private:
	PlayerSign sign;
	Game* game;

};

#endif /* PCPLAYER_H_ */
