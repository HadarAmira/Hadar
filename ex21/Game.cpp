/*
 * Game.cpp
 *
 *  Created on: Nov 24, 2017
 *      Author: zvi
 */

#include "Game.h"
using namespace std;


void Game::addRule(Rule *r) {
	rules.reserve(1);
	rules.push_back(r);
}

Game::Game(int size, PlayerSign sign1, PlayerSign sign2)
{
	board = new Board(size,sign1,sign2);
}

bool Game::validateMove(PlayerSign player, Point move) {
	for (std::vector<Rule*>::iterator it = rules.begin(); it != rules.end(); ++it) {
		if (!(*it)->validate(player, move, getBoard())) {
			return false;
		}
	}

	return true;
}

void Game::updateBoard(Point move, PlayerSign player) {

	vector<Point> changes;

	//adds selected tile to the list
	changes.reserve(1);
	Point pointer = Point(move.getRow(), move.getCol());
	changes.push_back(pointer);

	vector<Point> list;

	//get all tiles to change according to all the rules
	for (std::vector<Rule*>::iterator it = rules.begin(); it != rules.end(); ++it) {
		list = (*it)->listChanges(player, pointer, getBoard());
		changes.reserve(list.size());
		for (std::vector<Point>::iterator it = list.begin(); it != list.end(); ++it) {
			changes.push_back((*it));
		}
	}

	//change tiles
	for (std::vector<Point>::iterator it = changes.begin(); it != changes.end(); ++it) {
		board->setTile((*it), player);
	}
}

vector<Point> Game::getPossibleMoves(PlayerSign player) {
	vector<Point> list;

	for (int i = 0; i < board->getSize(); i++)
		for (int j = 0; j < board->getSize(); j++) {
			Point ans = Point(i, j);

			if (validateMove(player, ans)) {
				list.reserve(1);
				Point push = Point(i, j);
				list.push_back(push);
			}
		}
	return list;
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

void Game::notifyWinner(PlayerSign p1, PlayerSign p2) const{
	int p1Score = 0, p2Score = 0;

	for (int i = 0; i < board->getSize(); i++) {
		for (int j = 0; j < board->getSize(); j++) {
			if (board->getCharAt(i, j) == p1)
				p1Score++;
			else if (board->getCharAt(i, j) == p2)
				p2Score++;
		}
	}

	if (p1Score > p2Score)
		cout << p1<< ": You are the winner." << endl;
	else if (p1Score < p2Score)
		cout << p2<< ": You are the winner." << endl;
	else
		cout << "Draw." << endl;
}

Board* Game::getBoard() {
	return board;
}
