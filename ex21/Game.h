/*
 * Game.h
 *	305798752
 *  Created on: Nov 4, 2017
 *      Author: zvi liebskind
 */
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
	~Game();
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
	 * used to get moves on game's board
	 * player - the player who should move
	 * returns - a list of possible points to put disk on
	 */
	vector<Point> getPossibleMoves(PlayerSign player);
	/**
	 * board - the board to check on
	 * player - the player who should move
	 * returns - a list of possible points to put disk on
	 */
	vector<Point> getPossibleMoves(PlayerSign player, Board* board);
	/**
	 * player - the player who should move
	 * returns - true if the player has at least one move
	 */
	bool hasPossibleMoves(PlayerSign player);
	/**
	 * p1 - one of the players
	 * p2 - the second player
	 * return - (p1 disks)-(p2 disks)
	 */
	int getWinner(PlayerSign p1, PlayerSign p2) const;
	/**
	 * used to update the game's board.
	 * move - the place to put new disk
	 * player - the moving player
	 * return - number of flipped disks
	 */
	int updateBoard(Point move, PlayerSign player);
	/**
	 * board - a board to update
	 * move - the place to put new disk
	 * player - the moving player
	 * countOnly - 1 if only a flipping count is needed
	 * return - number of flipped disks
	 */
	int updateBoard(Point move, PlayerSign player, Board* board,
			int countOnly = 0);

private:
	Board* board;
	vector<Rule*> rules;
	/**
	 * checks if the wanted move is legal on the game's board
	 * player - the player who moves
	 * point - the point to check
	 */
	bool validateMove(PlayerSign player, Point move);
	/**
	 * player - the player who moves
	 * point - the point to check
	 * board - the board to check on
	 */
	bool validateMove(PlayerSign player, Point move, Board* board);
	/**
	 * list - a vector of points
	 * x - a point to check if exist on the list
	 */
	bool pointExist(vector<Point> list, Point x);

};

#endif /* GAME_H_ */
