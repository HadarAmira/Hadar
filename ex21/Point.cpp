/*
 * Point.cpp
 *
 *  Created on: Nov 24, 2017
 *      Author: zvi
 */

#include "Point.h"

Point::Point(int row, int col): row(row), col(col)
{
}

int Point::getRow() const
{
	return row;
}


Point Point::getPointFromString(string s) {
	int row = 0, col = 0;
	bool comma = false;
	//iterate string
	for (unsigned int i = 0; i < s.size(); i++) {
		//separator
		if (s[i] == ',') {
			comma = true;
			continue;
		}
		// not a number
		if (s[i] < '0' || s[i] > '9') {
			col=-1;
			row=-1;
			return Point(row, col);
		}
		//translate number
		if (!comma) {
			row *= 10;
			row += s[i] - '0';
		} else {
			col *= 10;
			col += s[i] - '0';
		}

	}
	// translate to board coordinates
	row--;
	col--;

	return Point(row,col);
}



int Point::getCol() const
{
	return col;
}



void Point::setRow(int row)
{
	this->row=row;
}

void Point::setCol(int col)
{
	this->col=col;
}

bool Point::equals(Point o) const
{
	return col == o.col && row == o.row;
}


