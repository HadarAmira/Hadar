/*
 * PcPlayer.cpp
 *
 *  Created on: Nov 24, 2017
 *      Author: zvi
 */

#include "PcPlayer.h"

PcPlayer::PcPlayer(PlayerSign sign, Game* game) :
	sign(sign), game(game) {
}
PcPlayer::~PcPlayer(){

}

PlayerSign PcPlayer::getSign() const {
	return sign;
}

void PcPlayer::playMove(Graphic *g, PlayerSign other) {

	// gets possible moves
	vector<Point> list = game->getPossibleMoves(sign);

	g->print((char)sign);
	string s = ": It's your move.";
	g->print(s);
	g->breakLine();

	string input;
	Point ans = Point(-1, -1);
	bool valid = false;
	// asks for input until a valid point is received
	while (!valid) {
		s = "Your possible moves: ";
		g->print(s);
		//prints all possibilities
		for (std::vector<Point>::iterator it = list.begin(); it != list.end(); ++it) {
			g->printPoint((*it));
			if (it != list.end() - 1) {
				g->print(',');

			}
		}

		g->breakLine();
		string s = "Please enter your move row,col: ";
		g->print(s);

		//gets user response
		input = g->getInput();
		g->breakLine();
		ans = Point::getPointFromString(input);
		//invalid input
		if (ans.getRow() == -1 && ans.getCol() == -1) {
			continue;
		}

		// check if point in options
		for (std::vector<Point>::iterator it = list.begin(); it != list.end(); ++it) {
			if (it->equals(ans)) {
				valid = true;
				break;
			}
		}
	}

	//updates the board according to the pick
	game->updateBoard(ans, sign);
}

bool PcPlayer::hasPossibleMove(){
	return game->hasPossibleMoves(sign);
}
