//
// Class Player is responsible for accepting a position and holding a value for each player.
//

#ifndef UNTITLED_PLAYER_H
#define UNTITLED_PLAYER_H
using namespace std;
#include <iostream>
#include <string>


class Player{
private:
    char value; // white=o/black=x
public:
    /**
     * constructor.
     * @param value - x/o.
     */
    Player(char value);
    /**
     * get the player.
     * @return
     */
    Player getPlayer();
    /**
     * get the value.
     * @return  value.
     */
    char getValue();

};


#endif //UNTITLED_PLAYER_H
