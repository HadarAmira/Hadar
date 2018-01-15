/*
 * FlipRule.h
 *
 *  Created on: Nov 24, 2017
 *      Author: zvi
 */
#include "Rule.h"
#include "PlayerSign.h"

#ifndef FLIPRULE_H_
#define FLIPRULE_H_

class FlipRule: public Rule {
public:
	FlipRule();
	bool validate(PlayerSign player, Point move, Board* board) const;
	vector<Point>
			listChanges(PlayerSign player, Point move, Board* board) const;
};

#endif /* FLIPRULE_H_ */
