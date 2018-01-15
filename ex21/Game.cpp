/*
 * Game.cpp
 *
 *  Created on: Nov 24, 2017
 *      Author: zvi
 */

#include "Game.h"
using namespace std;

Game::Game(int size, PlayerSign sign1, PlayerSign sign2) {
	board = new Board(size, sign1, sign2);
}

Game::~Game() {
	delete board;
}

void Game::addRule(Rule *r) {
	rules.reserve(1);
	rules.push_back(r);
}

bool Game::validateMove(PlayerSign player, Point move) {
	return validateMove(player, move, getBoard());
}

bool Game::validateMove(PlayerSign player, Point move, Board* board) {
	for (std::vector<Rule*>::iterator it = rules.begin(); it != rules.end(); ++it) {
		if (!(*it)->validate(player, move, board)) {
			return false;
		}
	}

	return true;
}

int Game::updateBoard(Point move, PlayerSign player) {
	return updateBoard(move, player, board);
}

int Game::updateBoard(Point move, PlayerSign player, Board* board,
		int countOnly) {
	vector<Point> changes;

	//adds selected tile to the list
	changes.reserve(1);
	changes.push_back(move);

	vector<Point> list;

	//get all tiles to change according to all the rules
	for (std::vector<Rule*>::iterator it = rules.begin(); it != rules.end(); ++it) {
		list = (*it)->listChanges(player, move, board);
		for (std::vector<Point>::iterator it = list.begin(); it != list.end(); ++it) {
			//checks if point is not already in changes list
			if (!pointExist(changes, (*it))) {
				changes.reserve(1);
				changes.push_back((*it));
			}
		}
	}

	int size = changes.size();

	//if only count is needed
	if (countOnly)
		return size;

	//changes tiles
	for (std::vector<Point>::iterator it = changes.begin(); it != changes.end(); ++it) {
		board->setTile((*it), player);
	}

	return size;
}

bool Game::pointExist(vector<Point> list, Point x) {
	for (std::vector<Point>::iterator it = list.begin(); it != list.end(); ++it) {
		if ((*it).equals(x))
			return true;
	}

	return false;
}

bool Game::hasPossibleMoves(PlayerSign player) {
	for (int i = 0; i < board->getSize(); i++)
		for (int j = 0; j < board->getSize(); j++) {
			Point ans = Point(i, j);

			if (validateMove(player, ans)) {
				return true;
			}
		}
	return false;
}

vector<Point> Game::getPossibleMoves(PlayerSign player) {
	return getPossibleMoves(player, board);
}

vector<Point> Game::getPossibleMoves(PlayerSign player, Board* board) {
	vector<Point> list;

	for (int i = 0; i < board->getSize(); i++)
		for (int j = 0; j < board->getSize(); j++) {
			Point ans = Point(i, j);

			if (validateMove(player, ans, board)) {
				list.reserve(1);
				Point push = Point(i, j);
				list.push_back(push);
			}
		}
	return list;
}

int Game::getWinner(PlayerSign p1, PlayerSign p2) const {
	int p1Score = 0, p2Score = 0;

	for (int i = 0; i < board->getSize(); i++) {
		for (int j = 0; j < board->getSize(); j++) {
			if (board->getCharAt(i, j) == p1)
				p1Score++;
			else if (board->getCharAt(i, j) == p2)
				p2Score++;
		}
	}

	return p1Score - p2Score;
}

Board* Game::getBoard() {
	return board;
}
