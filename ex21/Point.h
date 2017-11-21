/*
 * Point.h
 * 305798752
 *  Created on: Nov 3, 2017
 *      Author: zvi
 */
#include <string>
using namespace std;

#ifndef POINT_H_
#define POINT_H_
class Point {
public:
	/**
	 * creates a new point
	 * row - y axis loation
	 * col - x axis location
	 */
	Point(int row, int col);
	/**
	 * returns - the point's column
	 */
	int getCol() const;
	/**
	 * returns - the point's row
	 */
	int getRow() const;
	/**
	 * returns - true if the point are equivalent
	 */
	bool equals(Point o) const;
	/**
	 * returns string representation of the point
	 */
	string toString() const;
	/**
	 * creates a point from a comma separated string
	 * return - the desired point, (-1,-1) for invalid input
	 */
	static Point getPointFromString(string s);
private:
	int row;
	int col;
};

#endif /* POINT_H_ */
