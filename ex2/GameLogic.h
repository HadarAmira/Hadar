//
// Class Game Logic is responsible for the logic of the game, possible moves and check if there are legal moves.
//

#ifndef UNTITLED_GAMELOGIC_H
#define UNTITLED_GAMELOGIC_H
using namespace std;
#include <iostream>
#include <string>
#include <vector>
#include "Board.h"
#include "Player.h"


class GameLogic {
private:
    Board board();

public:

/**
 * this method check the possible moves and put them in a vector.
 * @param board1 - the givan board.
 * @param player - the given player.
 * @return vector.
 */
    virtual vector<Point> checkAround(Board &board1, Player &player) = 0;
    /**
 * this method change the value according to a point.
 * @param board1 - the given board.
 * @param player -the given player.
 * @param point - the given point.
 */
    virtual void flipFlop(Board &board1,Player &player,Point point) = 0;

};


#endif //UNTITLED_GAMELOGIC_H
