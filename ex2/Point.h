//
// Class Point is responsible for the player's position .
//

#ifndef UNTITLED_POINT_H
#define UNTITLED_POINT_H
#include <iostream>
using namespace std;

class Point {
private:
    /**
     * members.
     */
    int x;
    int y;

public:
    /**
     * a constructor.
     */
    Point();
    /**
     * constructor 2.
     * @param x1 -i.
     * @param y1 -j.
     */
    Point(int x1, int y1);
    /**
     * this method return the x value.
     * @return int.
     */
    int getX();
    /**
     * this method return the y value.
     * @return int.
     */
    int getY();
    /**
     * this method update the value.
     * @param x1 - the new value.
     */
    void setX(int x1);
    /**
     * this method update the value.
     * @param y1 - the new value.
     */
    void setY(int y1);
};


#endif //UNTITLED_POINT_H
