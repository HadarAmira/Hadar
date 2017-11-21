/*
 * Game.cpp
 *
 *  Created on: Nov 4, 2017
 *      Author: zvi
 */

#include "Game.h"
#include <iostream>
using namespace std;
Game::Game(BoardSize size, PlayerLogic* p1, PlayerLogic* p2) :
	p1(p1), p2(p2) {
	board = new Board(size, p1->getSign(), p2->getSign());

}

Game::~Game() {
	delete (board);

}

PlayerLogic* Game::getP1() const {
	return p1;
}
PlayerLogic* Game::getP2() const {
	return p2;
}
Board* Game::getBoard() const {
	return board;
}

void Game::addRule(Rule* r) {
	rules.reserve(1);
	rules.push_back(r);
}

vector<Point> Game::getPossibleMoves(PlayerLogic* player) {
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

bool Game::hasFinished() {
	return getPossibleMoves(p1).size() == 0 && getPossibleMoves(p2).size() == 0;
}

void Game::updateBoard(Point move, PlayerLogic* player) {

	vector<Point> changes;
	changes.reserve(1);
	int moveCol = move.getCol();
	int moveRow = move.getRow();
	Point pointer = Point(moveRow, moveCol);
	//add new tile
	changes.push_back(Point(moveRow, moveCol));
	vector<Point> list;
	//get all tiles to change
	for (std::vector<Rule*>::iterator it = rules.begin(); it != rules.end(); ++it) {
		list = (*it)->listChanges(player, pointer, getBoard());
		changes.reserve(list.size());
		for (std::vector<Point>::iterator it = list.begin(); it != list.end(); ++it) {
			changes.push_back((*it));
		}
	}

	//change tiles
	for (std::vector<Point>::iterator it = changes.begin(); it != changes.end(); ++it) {
		board->setTile((*it), player->getSign());
	}

}

bool Game::validateMove(PlayerLogic* player, Point move) {
	for (std::vector<Rule*>::iterator it = rules.begin(); it != rules.end(); ++it) {
		if (!(*it)->validate(player, move, getBoard())) {
			return false;
		}
	}

	return true;
}

void Game::notifyWinner() {
	int p1Score = 0, p2Score = 0;

	for (int i = 0; i < board->getSize(); i++) {
		for (int j = 0; j < board->getSize(); j++) {
			if (board->getCharAt(i, j) == p1->getSign())
				p1Score++;
			else if (board->getCharAt(i, j) == p2->getSign())
				p2Score++;
		}
	}

	if (p1Score > p2Score)
		cout << p1->getSign() << ": You are the winner." << endl;
	else if (p1Score < p2Score)
		cout << p2->getSign() << ": You are the winner." << endl;
	else
		cout << "Drew." << endl;
}
