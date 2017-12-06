/*
 * ClientPlayer.cpp
 *
 *  Created on: Dec 5, 2017
 *      Author: zvi
 */

#include "ClientPlayer.h"
#include <string.h>

ClientPlayer::ClientPlayer(Game* game, Graphic* g) :
	game(game), client("127.0.0.1", 8000) {

	client.connectToServer();

	Point message = client.getMove();
	string s;
	if (message.equals(Point(3, -1))) {
		s = "Waiting for other player to Connect..";
		g->print(s);
		g->breakLine();
		message = client.getMove();
	}
	if (message.equals(Point(1, -1))) {
		sign = O;
		s = "You are the X player";
		g->print(s);
		g->breakLine();
	} else {
		sign = X;
		s = "You are the O player";
		g->print(s);
		g->breakLine();
	}
}

bool ClientPlayer::hasPossibleMove() {
	return game->hasPossibleMoves(sign);
}

PlayerSign ClientPlayer::getSign() const {
	return sign;
}

void ClientPlayer::playMove(Graphic *g, PlayerLogic* other) {
	string s = "Waiting for client response";
	g->print(s);
	g->breakLine();
	Point p = client.getMove();
	if (p.getRow() == -1) {
		s = sign + ": has no valid moves";
		g->print(s);
	} else if (p.getRow()!=-2)
		game->updateBoard(p, sign);

	other->notifyMove(p);
}

void ClientPlayer::notifyMove(Point p) const{
	client.sendMove(p);
}
