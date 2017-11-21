//
// Class Game is responsible for group all the elements together.
//

#ifndef UNTITLED_GAME_H
#define UNTITLED_GAME_H

using namespace std;
#include <iostream>
#include <string>
#include "Board.h"
#include "Player.h"
#include "GameLogic.h"
#include "StandardLogic.h"
class Game {
private:
    /**
     * members.
     */
    Board* board;
    Player* black;
    Player* white;
    GameLogic* sl;
public:
    /**
     * a constructor.
     * @param board1  - the board game.
     * @param sl - the current logic.
     * @param board1 -  the given board.
     */
    Game(GameLogic* sl, int const size);
    /*this method returns the game board.
     * @return board.
     */
    Board* getBoard();
    /**
     * this method returns the white player.
     * @return white.
     */
    Player getWhite();
    /**
    * this method returns the black player.
    * @return black.
    */
    Player getBlack();
    /**
     * this method run the game.
     */
    void run(GameLogic* sl1);
    /**
     * destructor.
     */
    ~Game();

};


#endif //UNTITLED_GAME_H
