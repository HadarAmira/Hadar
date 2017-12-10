//
// Created by hadar on 29/11/17.
//
#include <iostream>
#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include "../src/Board.h"
#include "../src/FlipRule.h"
#include "../src/PlayerSign.h"
#include "../src/Console.h"
#include "../src/Game.h"

#define TEST_BOARD_SIZE 8


using namespace testing;


//FlipRule
TEST(FlipRuleTest, validateMoves) {
    FlipRule fl;
    PlayerSign signX = X;
    PlayerSign signO = O;
    PlayerSign sign=Z;
    Board b(TEST_BOARD_SIZE, signX, signO);
    Console console;
    b.initialize();
    Point p1(2, 3);

//regular moves
EXPECT_TRUE(fl.validate(signO ,p1,&b));


    //empty board (8*8)
    for(int i=0; i<b.getSize(); i++) {
        for( int j=0; j< b.getSize(); j++ ) {
            b.setTile(i,j,sign);
        }
    }

    //border
    Point p2(0, 5);
    EXPECT_FALSE(fl.validate(signX,p2,&b));

    //corner
    Point p3(7,7);
    EXPECT_FALSE(fl.validate(signO,p3,&b));

    //full col with xo pattern (8*8)
    // col number 4 if full until (5,4) with x- we will check the (5,5) as possible move
    for( int j=0; j<6; j++ ) {
        if((j+1)<6) {
            b.setTile(j,4,signX);
            b.setTile(j+1,4,signO);
        } else {
            break;
        }
    }
    Point p4(5,5);
    EXPECT_FALSE(fl.validate(signO,p4,&b));

    //full row with x (8*8)
    //row number 4 if full until (4,5) with x - we will check the (4,6) as possible move
    for( int j=0; j<6; j++ ) {
        b.setTile(4,j,signX);
    }

    Point p5(4,6);
    EXPECT_FALSE(fl.validate(signO,p5,&b));


}

    //FlipRule
TEST(FlipRuleTest, listchangeMoves) {
    FlipRule fl;
    PlayerSign signX = X;
    PlayerSign signO = O;
    PlayerSign sign =Z;
    Board b(TEST_BOARD_SIZE, signX, signO);
    Console console;

    b.initialize();

    //empty board (8*8)
    for(int i=0; i<b.getSize(); i++) {
        for( int j=0; j< b.getSize(); j++ ) {
            b.setTile(i,j,sign);
        }
    }
    Point p1(2, 2);

    EXPECT_TRUE(fl.listChanges(signX, p1, &b).empty());

}

    //Game test
TEST(GameTest, getPossibleMoves) {
    FlipRule* fl= new FlipRule();
    PlayerSign signX = X;
    PlayerSign signO = O;
    PlayerSign sign =Z ;
    Board b(TEST_BOARD_SIZE, signX, signO);
    Game g(TEST_BOARD_SIZE, signX, signO);
    Console console;
    g.addRule(fl);
    b.initialize();


    //full  board by x sign (8*8)
    for(int i=0; i<b.getSize(); i++) {
        for( int j=0; j< b.getSize(); j++ ) {
            b.setTile(i,j,signX);
        }
        b.setTile(b.getSize()-1,b.getSize()-1,sign);
    }

    vector<Point> v = g.getPossibleMoves(signO);
    cout<< "vectorSize"<<v.size();

//full
EXPECT_TRUE(g.getPossibleMoves(signO).empty());

    //empty board (8*8)
    for(int i=0; i<b.getSize(); i++) {
        for (int j = 0; j < b.getSize(); j++) {
            b.setTile(i, j, sign);
        }
    }
//empty
EXPECT_TRUE(g.getPossibleMoves(signX).empty());
}






TEST(GameTest, hasPossibleMoves) {
    FlipRule* fl = new FlipRule();
    PlayerSign signX = X;
    PlayerSign signO = O;
    PlayerSign sign =Z;
    Board b(TEST_BOARD_SIZE, signX, signO);
    Game g(TEST_BOARD_SIZE, signX, signO);

    g.addRule(fl);
    Console console;
    b.initialize();

//possible move when board is full
    //full  board by x sign (8*8)
    for(int i=0; i<b.getSize(); i++) {
        for( int j=0; j< b.getSize(); j++ ) {
            b.setTile(i,j,signX);
        }
        b.setTile(b.getSize()-1,b.getSize()-1, sign);
    }

   EXPECT_FALSE(g.hasPossibleMoves(signX));


//possible move when board is empty
    //empty board (8*8)
    for (int i = 0; i < b.getSize(); i++) {
        for (int j = 0; j < b.getSize(); j++) {
            b.setTile(i, j, sign);
        }
    }

    EXPECT_FALSE(g.hasPossibleMoves(signO));

//the game is over for one player
    for( int j=0; j<6; j++ ) {
        b.setTile(4,j,signX);
    }
    b.setTile(4,6,signO);

    EXPECT_FALSE(g.hasPossibleMoves(signO)||g.hasPossibleMoves(signX));
}

