/*
 * Rule.h
 * 305798752
 *  Created on: Nov 4, 2017
 *      Author: zvi
 */
#include "Board.h"
#include "Point.h"
#include "PlayerLogic.h"
#include <vector>

#ifndef RULE_H_
#define RULE_H_

class Rule {

public:
	virtual ~Rule();
	virtual bool validate(PlayerLogic* player,Point move, Board* board) const=0;
	virtual vector<Point> listChanges(PlayerLogic* player,Point move, Board* board) const=0;

};


#endif /* RULE_H_ */
