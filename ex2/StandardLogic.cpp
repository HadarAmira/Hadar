//
// Class StandardLogic.
//
#include <iostream>
#include "StandardLogic.h"
#include "Board.h"
#include <vector>
using namespace std;



bool StandardLogic:: checkDirection(Board &board1, int changei, int changej, Point &point, Player &player) {
    string val, rval;
    val = player.getValue();
    Point p (point.getX()+changei, point.getY()+changej);

    if(val=="x") {
        rval ="o";
    } else {
        rval="x";
    }

    if(board1.boarderlines(p.getX(), p.getY())==false) {
        if(board1.getValue(p.getX(), p.getY()).compare(rval)!= 0) {
            return false;
        }
    }
    p.setX(p.getX()+changei);
    p.setY(p.getY()+changej);

    while (!(board1.boarderlines(p.getX() , p.getY()))) {

        if (board1.getValue(p.getX(), p.getY()).compare(" ")==0) {
            return false;
        }else if (board1.getValue(p.getX(), p.getY()).compare(val)==0) {
            return true;
        }
        p.setX(p.getX()+changei);
        p.setY(p.getY()+changej);
    }
    return false;
}

vector<Point> StandardLogic::checkAround(Board &board1, Player &player) {
vector<Point> possible_move;
    for( int i=1; i<=board1.getBoardSize(); i++) {
        for (int j = 1; j <= board1.getBoardSize(); j++) {
            if (board1.getValue(i,j).compare(" ") == 0) {
                Point p = Point(i, j);
                if (i == 3 && j == 4){
                    cout << "";
                }
                if (checkDirection(board1, -1, 0, p, player) ||
                    checkDirection(board1, -1, 1, p, player) ||
                    checkDirection(board1, 0, 1, p, player) ||
                    checkDirection(board1, 1, 1, p, player) ||
                    checkDirection(board1, 1, 0, p, player) ||
                    checkDirection(board1, 1, -1, p, player) ||
                    checkDirection(board1, 0, -1, p, player) ||
                    checkDirection(board1, -1, -1, p, player)) {
                    possible_move.push_back(p);
                }
            }
        }
    }
    return possible_move;





}

void StandardLogic::flipFlop(Board &board1, Player &player, Point point) {
    string val;
    val = player.getValue();
    string rval;
    if (val.compare("o") == 0)
    {
        rval = "x";
    } else {
        rval="o";
    }

    for (int i = -1; i <= 1 ; ++i) {
        for (int j = -1; j <= 1 ; ++j) {
            if (i != 0 || j != 0){
                if (checkDirection(board1,i,j,point,player)){
                    board1.setValue(point,player.getValue());
                    for (int row = point.getX()+i,col = point.getY()+j; board1.getValue(row,col).compare(rval) == 0; row += i,col+=j)
                    {
                        Point p = Point(row,col);
                        board1.setValue(p,player.getValue());
                    }
                }
            }
        }
    }
}

StandardLogic::StandardLogic() {

}
