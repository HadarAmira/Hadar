/*
 * Game.h
 *	305798752
 *  Created on: Nov 4, 2017
 *      Author: zvi liebskind
 */
#include "PlayerLogic.h"
#include "BoardSize.h"
#include "Board.h"
#include "Rule.h"
#include "FlipRule.h"
#include "Point.h"
#include <vector>

#ifndef GAME_H_
#define GAME_H_

class Game {

public:
	/**
	 * creates a new game
	 * size - the size of the board
	 * p1 - the first player
	 * p2 - the second player
	 */
	Game(BoardSize size, PlayerLogic* p1, PlayerLogic* p2);
	/*
	 * returns - player1
	 */
	PlayerLogic* getP1() const;
	/*
	 * returns - player2
	 */
	PlayerLogic* getP2() const;
	/*
	 * returns - the game board
	 */
	Board* getBoard() const;
	/**
	 * adds a new rule to the game
	 */
	void addRule(Rule* r);
	/**
	 * player - the player who should move
	 * returns - a list of possible points to put disk on
	 */
	vector<Point> getPossibleMoves(PlayerLogic* player);
	/**
	 * updates the board according to the player's move
	 * move - point to put new disk on
	 * player - the player who moves
	 */
	void updateBoard(Point move, PlayerLogic* player);
	/**
	 * return true if there is no more possible moves
	 */
	bool hasFinished();
	/**
	 * prints winning notification
	 */
	void notifyWinner();
	virtual ~Game();

private:
	PlayerLogic* p1;
	PlayerLogic* p2;
	Board* board;
	vector<Rule*> rules;
	bool validateMove(PlayerLogic* player, Point move);

};

#endif /* GAME_H_ */
