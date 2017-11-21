//
// Board.h.
// The Board class is responsible for allocate the board size printe the start board.
//

#ifndef UNTITLED_BOARD_H
#define UNTITLED_BOARD_H

#include <iostream>
#include <string>
#include <vector>
#include "Point.h"

using namespace std;


class Board {
private:
    /**
     * members.
     */
    string **board;
    int boardSize;
    string value;

public:
    /**
     * the game board.
     * @param size   - dynamic size.
     */
    Board(int size);
    /**
     * this method initialize the board.
     */
    void initializeBoard();
    /**
     * this method prints the board.
     */
    void printBoard();
    /**
     * this method returns the board size.
     * @return size.
     */
    int getBoardSize();
    /**
     * this method gets two iterators and returns the value in the board according to the coordinates.
     * @param x  - j.
     * @param y   -i.
     * @return the cell'es value
     */
    string getValue(int x, int y);
       /**
        * this method sets the cell according to a point and value.
        * @param point1 - the given coordinate.
        * @param val - the given value.
        */
      void setValue(Point point1, char val);


    /**
     * this method pass the board and sum the number of x'es appearance.
     * @return sum.
     */
    int numberOfX();
    /**
     * this method pass the board and sum the number of o'es appearance.
     * @return sum.
     */
    int numberOfO();
/**
 * this method checks the board lines and return true if it is the end of the board.
 * @param i - row.
 * @param j - column.
 * @return true/false.
 */
    bool  boarderlines (int i, int j);

    /**
     * destructor.
     */
    ~Board();
};

#endif //UNTITLED_BOARD_H
