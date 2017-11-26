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
#include "PcPlayer.h"
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
	PlayerSign sign1 = O;
	PlayerSign sign2 = X;

	// create new game
	/// gets wanted size from user
	int size = -1;
	string sizeString;
	while (size < 6 || size > 100) {
		sizeString = "Please enter board size (6-100):";
		console->print(sizeString);
		console->breakLine();
		string sizeString = console->getInput();
		size = stringToInt(sizeString);
	}
	///creates the game with the player symbols
	Game* game = new Game(size, sign1, sign2);
	//console->printBoard(game->getBoard());
	// creates the players
	PlayerLogic* p1 = new PcPlayer(sign1, game);
	PlayerLogic* p2 = new PcPlayer(sign2, game);

	// add rules
	Rule* flip = new FlipRule();
	game->addRule(flip);

	PlayerLogic* currTurn = p1;
	PlayerLogic* opp = p2;
	// while any player has a move
	while (p1->hasPossibleMove() || p2->hasPossibleMove()) {
		//print board
		console->printBoard(game->getBoard());
		///check if player has moves
		if (currTurn->hasPossibleMove()) {
			///play the user's turn
			currTurn->playMove(console, opp);
		} else {
			console->print(currTurn->getSign());
			string s = ": It's your move.";
			console->print(s);
			console->breakLine();
			s
					= "No possible moves. Player passes back to the other player. Press any key to continue";
			console->print(s);
			console->getInput();
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

	game->notifyWinner(sign1,sign2);

	//delete
	delete game;
	delete p1;
	delete p2;
	delete console;
	delete flip;

}

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

