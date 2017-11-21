//
// Class Board.
//

#include "Board.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;
//a constructor - an empty board
Board::Board(int size) {
    boardSize=size;
    board= new string*[size+1];
    //initialization
    for (int i=0; i<size+1; i++) {
            board[i] = new string[size+1];
    }
}

void Board:: initializeBoard() {
    //initialized the matrix with spaces
    for (int i=0; i<boardSize+1; i++) {
        for( int j=0; j<boardSize+1; j++) {
            board[i][j]= " ";
        }
    }
    //position the white player
    board[boardSize/2][boardSize/2]="o";
    board[(boardSize/2)+1][(boardSize/2)+1]="o";
    //position the black player
    board[boardSize/2][(boardSize/2)+1]="x";
    board[(boardSize/2)+1][boardSize/2]="x";
}
//print the board
void Board::printBoard() {

    // drawing the board
    // i rows, j columns
    //& putting the numbers at the beginning of the matrix
        for (int i = 0; i <= boardSize; ++i) {
            for (int j = 0; j <= boardSize; ++j) {
                if (i == 0 && j > 0) {
                    cout << j<< " " << '|';
                } else {
                    if (j == 0 && i > 0) {
                        cout << i<< " " << '|';
                    } else {
                        cout << board[i][j]<< " " << '|';
                    }
                }
            }
            cout << endl;
            for (int j = 0; j <= boardSize; ++j) {
                cout << "---";
            }
            cout << endl;
        }
}
//get board size function
int Board::getBoardSize() {
    return boardSize;
}
string Board::getValue(int i, int j) {
    return board[i][j];
}

void Board::setValue(Point point1, char val) {
    board[point1.getX()][point1.getY()] = val;

}


//destructor
//free the memory
Board::~Board() {
    for (int i=0; i<boardSize+1; i++) {
        delete[] board[i];
    }
    delete[] board;
}

int Board::numberOfX() {
    int sum=0;
    for(int i=0; i<this->getBoardSize();i++) {
        for(int j=0; j<this->getBoardSize(); j++) {
            if(this->getValue(i,j)=="x") {
                sum++;
            }
        }
    }
    return sum;
}

int Board::numberOfO() {
    int sum=0;
    for(int i=0; i<this->getBoardSize();i++) {
        for(int j=0; j<this->getBoardSize(); j++) {
            if(this->getValue(i,j)=="o") {
                sum++;
            }
        }
    }
    return sum;
}
bool Board:: boarderlines (int i, int j) {
    return  (1 > i || i > this->getBoardSize() - 1) || (1 > j || j > this->getBoardSize() - 1);

}