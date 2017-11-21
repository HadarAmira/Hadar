//
// Class StandardLogic is responsible for the logic.
//

#ifndef UNTITLED_STANDARDLOGIC_H
#define UNTITLED_STANDARDLOGIC_H

#include <vector>
#include "GameLogic.h"
#include "Point.h"

using namespace std;

class StandardLogic : public GameLogic{
private:

public:
    /**
     * a constructor.
     */
    StandardLogic();


/**
 * this method check the possible moves in a single direction.
 * @param board1  -the given board.
 * @param changei  - the change in i.
 * @param changej -the change in j.
 * @param point - the wanted point.
 * @param player - the given player.
 * @return true/false.
 */
    bool checkDirection(Board &board1, int changei, int changej, Point &point, Player &player);

/**
 * this method change the value according to a point.
 * @param board1 - the given board.
 * @param player -the given player.
 * @param point - the given point.
 */
    virtual void flipFlop(Board &board1,Player &player,Point point);
/**
 * this method check the possible moves and put them in a vector.
 * @param board1 - the givan board.
 * @param player - the given player.
 * @return vector.
 */
    virtual vector<Point> checkAround(Board &board1, Player &player);
};


#endif //UNTITLED_STANDARDLOGIC_H
