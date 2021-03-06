/*
 * AIPlayer.cpp
 *
 *  Created on: Nov 27, 2017
 *      Author: zvi
 */

#include "AIPlayer.h"

AIPlayer::AIPlayer(PlayerSign sign, Game* game) :
	sign(sign), game(game) {

}

PlayerLogic::~PlayerLogic() {

}

bool AIPlayer::hasPossibleMove() {
	return game->hasPossibleMoves(sign);
}

void AIPlayer::playMove(Graphic *g, PlayerLogic* p2) {

	// declare turn start
	g->print((char)sign);
	string s = ": It's your move.";
	g->print(s);
	g->breakLine();

	// gets possible moves for AI player
	vector<Point> list = game->getPossibleMoves(sign);

	int min = game->getBoard()->getSize() * game->getBoard()->getSize();
	int res;
	Point ans = Point(0,0);
	// Iterates over possible points and picks best move
	for (std::vector<Point>::iterator it = list.begin(); it != list.end(); ++it) {
		//creates a copy of the game board and updates it
		Board* b = new Board(game->getBoard());
		game->updateBoard(*(it), getSign(), b);
		//gets best move for the opponent
		res = countFlips(b, p2->getSign());
		if (res < min) {
			min = res;
			ans = *(it);
		}

		delete b;
	}
	g->breakLine();
	// declare turn end
	g->print((char)sign);
	s = ":";
	g->print(s);
	g->printPoint(ans);
	s = " has been chosen.";
	g->print(s);
	g->breakLine();

	//updates the board according to the worst possible opp move
	game->updateBoard(ans, sign);


	// notifies the other player of the selection
	p2->notifyMove(ans);
}

int AIPlayer::countFlips(Board* board, PlayerSign p2) {

	//gets all moves for p2
	vector<Point> list = game->getPossibleMoves(p2, board);

	int max = 0;
	int res;

	// Iterates over possible points and gets best move
	for (std::vector<Point>::iterator it = list.begin(); it != list.end(); ++it) {
		//gets max number of flips for the opponent
		res = game->updateBoard((*it), p2, board, 1);
		max = res > max ? res : max;
	}

	return max;
}

PlayerSign AIPlayer::getSign() const {
	return sign;
}

void AIPlayer::notifyMove(Point p) const{

}

