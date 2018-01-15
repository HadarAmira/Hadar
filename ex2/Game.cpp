//
// Class Game.
//

#include "Game.h"
#include <iostream>
#include <string>
#include "Board.h"
#include "Player.h"
#include "GameLogic.h"
#include "Point.h"
using namespace std;
//a constructor
Game::Game(GameLogic *gl1, int const size) {
    board = new Board(size);
    this->black = new Player('x');
    this->white= new Player('o');
    sl = gl1;
}
//get the game board
Board* Game:: getBoard() {
    return this->board;

}
//get the white player
Player Game:: getWhite(){
    return *this->white;
}
//get the black player
Player Game:: getBlack(){
    return *this->black;
}

void Game::run(GameLogic* sl1) {
    int row=0, col=0;
    char p;
    vector<Point> black_moves,white_moves;
    vector<Point>::iterator it;
do {
    black_moves = sl1->checkAround(*board, *black);
    this->board->printBoard();
    if (black_moves.size() == 0) {
        cout << "Black - No possible moves anymore." << endl;
    } else {
        cout << "X: It's your move." << endl;
        cout << "Your possible moves: "; //possible moves
        for (it = black_moves.begin(); it != black_moves.end(); it++) {
            cout << "(" << it->getX() << "," << it->getY() << "),";
        }

        cout << endl;
        cout << "Pleas enter your move row, col: " << endl;
        cin >> p >> row >> p >> col >> p;
        Point pointx(row, col);
        sl1->flipFlop(*board, *black, pointx);
    }
    white_moves = sl1->checkAround(*board, *white);
    this->board->printBoard();
    if (white_moves.size() == 0) {
        cout << "White - No possible moves anymore.";
    } else {
        //o'es turn.
        cout << "O: It's your move.\n";
        cout << "Your possible moves: "; //possible moves
        for (it = white_moves.begin(); it < white_moves.end(); it++) {
            cout << "(" << it->getX() << "," << it->getY() << "),";
        }
        cout << endl;
        cout << "Pleas enter your move row, col: \n";
        cin >> p >> row >> p >> col >> p;
        Point pointo = Point(row, col);
        sl1->flipFlop(*board, *white, pointo);

    }
}while (black_moves.size() != 0 || white_moves.size() != 0);

       if(board->numberOfO()>board->numberOfX()) {
           cout<< " Black (X) won!";
       } else {
           cout<< "White (o) won!";
       }

}

Game::~Game() {
    delete(black);
    delete(white);

}


