/*
 * main.cpp
 *
 *  Created on: Nov 02, 2017
 *      Author: zvi liebskind
 *      ID: 305798752
 */

#include "Board.h"
#include "PlayerLogic.h"
#include "PlayerSign.h"
#include "ClientPlayer.h"
#include "PcPlayer.h"
#include "AIPlayer.h"
#include "Game.h"
#include "Rule.h"
#include "FlipRule.h"
#include "Point.h"
#include "Graphic.h"
#include "Console.h"
#include <vector>

#include <string>
using namespace std;

int stringToInt(string s);

int main() {
	string enter;

	//creates the graphic interface
	Graphic* console = new Console();

	//generates the signs of the players
	PlayerSign sign1 = X;
	PlayerSign sign2 = O;

	// create new game
	/// gets wanted size from user
	int size = -1;
	string s;
	while (size < 6 || size > 100) {
		s = "Please enter board size (6-100):";
		console->print(s);
		console->breakLine();
		string sizeString = console->getInput();
		size = stringToInt(sizeString);
	}

	///creates the game with the player symbols and initializes it
	Game* game = new Game(size, sign1, sign2);
	game->getBoard()->initialize();

	//let user choose opponent
	size = -1;
	while (size < 0 || size > 3) {
		s = "Choose opponent:";
		console->print(s);
		console->breakLine();
		s = "1. A local player";
		console->print(s);
		console->breakLine();
		s = "2. AI Player";
		console->print(s);
		console->breakLine();
		s = "3. A remote Player";
		console->print(s);
		console->breakLine();
		string sizeString = console->getInput();
		size = stringToInt(sizeString);
	}

	// creates the players
	PlayerLogic * p1;
	PlayerLogic * p2;
	if (size == 3) {
		p2 = new ClientPlayer(game, console);
		if (p2->getSign() == X)
			p1 = new PcPlayer(O, game);
		else
			p1 = new PcPlayer(X, game);
	} else if (size == 1)
		p2 = new PcPlayer(O, game);
	else if (size == 2)
		p2 = new AIPlayer(O, game);
	if (size != 3)
		p1 = new PcPlayer(X, game);

	// add rules
	Rule* flip = new FlipRule();
	game->addRule(flip);

	PlayerLogic* currTurn;
	PlayerLogic* opp;
	if (p1->getSign() == X) {
		currTurn = p1;
		opp = p2;
	} else {
		currTurn = p2;
		opp = p1;
	}
	// while any player has a move
	while (p1->hasPossibleMove() || p2->hasPossibleMove()) {
		//print board
		console->printBoard(game->getBoard());
		///check if player has moves
		if (currTurn->hasPossibleMove()) {
			///play the user's turn
			currTurn->playMove(console, opp);
		} else {
			console->print((char) (currTurn->getSign()));
			s = ": It's your move.";
			console->print(s);
			console->breakLine();
			s
					= "No possible moves. Player passes back to the other player. Press any key to continue";
			console->print(s);
			console->getInput();
			// notifies other player of the NoMove situation
			opp->notifyMove(Point(-1,-1));
		}
		///switch turn
		if (currTurn == p1) {
			currTurn = p2;
			opp = p1;
		} else {
			currTurn = p1;
			opp = p2;
		}

	}
	//notify players of game end
	p1->notifyMove(Point(-2,-1));
	p2->notifyMove(Point(-2,-1));

	//prints final board
	console->printBoard(game->getBoard());

	int result = game->getWinner(sign1, sign2);
	if (result > 0)
		console->notifyWinner(sign1);
	else if (result < 0)
		console->notifyWinner(sign2);
	else {
		string s = "Draw.";
		console->print(s);
		console->breakLine();
	}

	//delete
	delete game;
	delete p1;
	delete p2;
	delete console;
	delete flip;

}

/**
 * s - a string to convert to integer
 * returns parsed int, -1 for wrong input
 */
int stringToInt(string s) {
	int i = 0;
	for (string::iterator it = s.begin(); it != s.end(); ++it) {
		if ((*it) < '0' || (*it) > '9')
			return -1;
		i *= 10;
		i += (*it) - '0';
	}

	return i;
}

