//
// Class Player.
//

#include "Player.h"
#include "Board.h"
#include <iostream>
#include <string>
using namespace std;

//constructor
Player::Player(char value1) {
    value=value1;
}
//get function
Player Player::getPlayer(){
    return *this;
}
//get value function
char Player::getValue() {
    return this->value;
}