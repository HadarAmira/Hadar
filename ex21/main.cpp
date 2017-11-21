/*
 * main.cpp
 *
 *  Created on: Nov 02, 2017
 *      Author: zvi liebskind
 *      ID: 305798752
 */

#include "Board.h"
#include "BoardSize.h"
#include "PlayerLogic.h"
#include "PcPlayer.h"
#include "Game.h"
#include "Rule.h"
#include "FlipRule.h"
#include "Point.h"
#include "Graphic.h"
#include "Console.h"
#include <vector>

#include <string>

int main() {
	string enter;

	//creates the graphic interface
	Graphic* console = new Console();

	//creates two pc players
	PlayerLogic* p1 = new PcPlayer('O');
	PlayerLogic* p2 = new PcPlayer('X');

	// create new game
	BoardSize size = eight;
	Game game = Game(size, p1, p2);
	// add rules
	Rule* flip = new FlipRule();
	game.addRule(flip);
	// while !gameFinished
	PlayerLogic* currTurn = p1;
	while (!game.hasFinished()) {
		//print board
		console->printBoard(game.getBoard());
		///calc possible moves
		vector<Point> moves = game.getPossibleMoves(currTurn);
		///let player choose spot
		if (moves.size() != 0) {
			///update board
			game.updateBoard(currTurn->chooseMove(moves,console), currTurn);
		} else {
			console->print(currTurn->getSign());
			string s = ": It's your move.";
			console->print(s);
			console->breakLine();
			s = "No possible moves. Player passes back to the other player. Press any key to continue";
			console->print(s);
			console->getInput();
		}
		///switch turn
		if (currTurn == p1)
			currTurn = p2;
		else
			currTurn = p1;
	}

	game.notifyWinner();

	//delete
	delete p1;
	delete p2;
	delete console;
	delete flip;

}
