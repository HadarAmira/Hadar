//
// Class Point.
//

#include <iostream>
#include "Point.h"
using namespace std;
//a constructor
Point::Point() {
    this->x=0;
    this->y=0;
}
//a constructor.
Point::Point(int x1, int y1) {
    this->x= x1;
    this->y= y1;

}

//get the current x coordinate.
int Point::getX() {
    return this->x;

}
//get the current y coordinate.
int Point::getY() {
    return this->y;

}
//set the current x coordinate.
void Point::setX(int x1) {
    this->x= x1;

}
//set the current y coordinate.
void Point::setY(int y1) {
    this->y= y1;

}

