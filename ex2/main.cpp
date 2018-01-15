#include <iostream>
#include "Board.h"
#include "GameLogic.h"
#include "StandardLogic.h"
#include "Game.h"

using namespace std;

int main() {
    int size;
    cout<< "please enter a board size";
    cin>> size;
    GameLogic* sl = new StandardLogic();
    Game game(sl, size);
    game.getBoard()->initializeBoard();
    cout<< endl;
    game.run(sl);


    return 0;
}