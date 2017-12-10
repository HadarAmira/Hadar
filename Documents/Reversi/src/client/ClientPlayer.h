/*
 * ClientPlayer.h
 */

#ifndef CLIENTPLAYER_H_
#define CLIENTPLAYER_H_

#include "PlayerLogic.h"
#include "Client.h"

class ClientPlayer: public PlayerLogic {
public:
	/**
	 * creates a new client player
	 * sign - the char that represents the player on board
	 * game - the current game
	 */
	ClientPlayer(Game* game,Graphic* g);
	void playMove(Graphic *g, PlayerLogic* other);
	PlayerSign getSign() const;
	bool hasPossibleMove();
	void notifyMove(Point p) const;
private:
	PlayerSign sign;
	Game* game;
	Client client;
};

#endif /* CLIENTPLAYER_H_ */
