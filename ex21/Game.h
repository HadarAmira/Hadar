/*
 * Game.h
 *	305798752
 *  Created on: Nov 4, 2017
 *      Author: zvi liebskind
 */
#include "PlayerLogic.h"
#include "Board.h"
#include "Rule.h"
#include "FlipRule.h"
#include "Point.h"
#include <vector>
#include <iostream>

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
	Game(int size, PlayerSign p1, PlayerSign p2);
	/**
	 * creates a new game
	 * the game's board
	 */
	Game(Board board);
	/*
	 * returns - the game board
	 */
	Board* getBoard();
	/**
	 * adds a new rule to the game
	 */
	void addRule(Rule* r);
	/**
	 * player - the player who should move
	 * returns - a list of possible points to put disk on
	 */
	vector<Point> getPossibleMoves(PlayerSign player);
	/**
	 * player - the player who should move
	 * returns - true if the player has at least one move
	 */
	bool hasPossibleMoves(PlayerSign player);
	/**
	 * prints winning notification
	 */
	void notifyWinner(PlayerSign p1, PlayerSign p2) const;
	/**
	 * move - the place to put new disk
	 * player - the moving player
	 */
	void updateBoard(Point move, PlayerSign player);

private:
	Board* board;
	vector<Rule*> rules;
	/**
	 * checks if the wanted move is legal
	 */
	bool validateMove(PlayerSign player, Point move);

};

#endif /* GAME_H_ */
