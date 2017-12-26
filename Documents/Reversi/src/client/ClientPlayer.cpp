/*
 * ClientPlayer.cpp
 *
 */

#include "ClientPlayer.h"
#include <string.h>
#include <sstream>
#include <iostream>

ClientPlayer::ClientPlayer(Game* game, Graphic* g) :
		game(game), client("settings.txt") {

	client.connectToServer();
	int res=0;
	string m, m1, m2;
	while(!res){
	m = "Welcome, please choose an option: ";
	g->print(m);
	g->breakLine();
	m = "1 - start <name>";
	g->print(m);
	g->breakLine();
	m = "2 - join <name>";
	g->print(m);
	g->breakLine();
	m = "3 - list-games";
	g->print(m);
	g->breakLine();

	cin>>m;
	istringstream iss(m);
	iss >> m1;   //message
	iss >> m2;   //name

	if (m1.compare("start")) {
		res=1;
	} else if (m1.compare("join")) {
		res=2;
	} else if (m1.compare("list-games")) {
		client.sendMove(3);
		int games= client.getInt();

		for (int i=0; i<games; i++ ) {
			g->print(client.getString());
			g->breakLine();
		}
		client.connectToServer();

	}
	}

	client.sendMove(res);


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