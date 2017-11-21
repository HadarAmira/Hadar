/*
 * PcPlayer.cpp
 *
 *  Created on: Nov 3, 2017
 *      Author: zvi
 */

#include "PcPlayer.h"
#include <string>
using namespace std;

PcPlayer::PcPlayer(char sign) :
	sign(sign) {

}

PlayerLogic::~PlayerLogic() {

}

Point PcPlayer::chooseMove(vector<Point> &list, Graphic* g) const {
	g->print(sign);
	string s = ": It's your move.";
	g->print(s);
	g->breakLine();

	string input;
	int row = -1, col = -1;

	while (row == -1 && col == -1) {
		s = "Your possible moves: ";
		g->print(s);
		for (std::vector<Point>::iterator it = list.begin(); it != list.end(); ++it) {
			int r =it->getRow();
			int c =it->getCol();
			Point p(r,c);
			g->printPoint(p);
			if (it != list.end() - 1) {
				g->print(',');

			}
		}

		g->breakLine();
		string s = "Please enter your move row,col: ";
		g->print(s);


		input = g->getInput();
		g->breakLine();
		Point ans = Point::getPointFromString(input);
		//invalid input
		if (ans.getRow() == -1 && ans.getCol() == -1) {
			continue;
		}

		// check if point in options
		for (std::vector<Point>::iterator it = list.begin(); it != list.end(); ++it) {
			if (it->equals(ans)) {
				row = it->getRow();
				col = it->getCol();
				break;
			}
		}
	}

	return Point(row, col);
}

char PcPlayer::getSign() const {
	return sign;
}

