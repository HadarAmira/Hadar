/*
 * ClientPlayer.cpp
 *
 */

#include "ClientPlayer.h"
#include <string.h>
#include <sstream>
#include <iostream>
<<<<<<< HEAD
#include <sys/socket.h>

=======
>>>>>>> 552efa29b9603f491953c7bc9dc155b438cf0de8
#define WAIT_FOR_CONNECTION 3
#define DISCONNECTED -4
#define WRONG_NAME -3
#define END -2
#define MAX_COMMAND 10
#define MAX_NAME 50
ClientPlayer::ClientPlayer(Game* game, Graphic* g) :
<<<<<<< HEAD
	game(game), client("/home/hadar/Documents/Reversi/exe/settings.txt") {

	int res;
	string m;


	while (true) {

=======
	game(game), client("settings.txt") {

	int res;
	string m;

	while (true) {
>>>>>>> 552efa29b9603f491953c7bc9dc155b438cf0de8
		client.connectToServer();

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

		cin >> m;

		if (m.compare("list-games") == 0) {
			client.sendMove(3);
			int games = client.getInt();

			for (int i = 0; i < games; i++) {
				res = client.getInt();
				char name[res];
				client.getString(res, name);
				g->print(name);
				if (i != games - 1)
					g->print(',');
			}
			g->breakLine();
		} else if (m.compare("start") == 0 || m.compare("join") == 0) {
			res = m.compare("start") == 0 ? 1 : 2;
			//send option
			client.sendMove(res);

			//get name from user
			cin >> m;
			//count length
			int length = 0;
			while (m[length] != '\0')
				length++;
			const char * c = m.c_str();
			client.sendMove(c, length + 1);
			//get response
			res = client.getInt();
			if (res != -3) {
				break;
			}

			//if input is invalid
			m = "Name is not available";
			g->print(m);
			g->breakLine();

		}
	}

	Point message = Point(0, 0);
	if (res == WAIT_FOR_CONNECTION) {
		m = "Waiting for other player to Connect..";
		g->print(m);
		g->breakLine();
		message = client.getMove();
	} else {
		message = client.getMove();
	}
	if (message.equals(Point(1, -1))) {
		sign = O;
		m = "You are the X player";
		g->print(m);
		g->breakLine();
	} else {
		sign = X;
		m = "You are the O player";
		g->print(m);
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
		g->breakLine();
	} else if (p.getRow() == DISCONNECTED) {
		s = "Disconnected from server";
		g->print(s);
		g->breakLine();
		return;
	} else if (p.getRow() != END)
		game->updateBoard(p, sign);

	other->notifyMove(p);
}

void ClientPlayer::notifyMove(Point p) const {
	client.sendMove(p);
}
