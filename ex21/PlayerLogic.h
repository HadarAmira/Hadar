/*
 * PlayerLogic.h
 * 305798752
 *  Created on: Nov 3, 2017
 *      Author: zvi
 */
#include <vector>
#include "Point.h"
#include "Graphic.h"
using namespace std;

#ifndef PLAYERLOGIC_H_
#define PLAYERLOGIC_H_

class PlayerLogic {
public:
	virtual ~PlayerLogic();
	virtual Point chooseMove(vector<Point> &list, Graphic* g) const = 0;
	virtual char getSign() const =0;
};

#endif /* PLAYERLOGIC_H_ */
