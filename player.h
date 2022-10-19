/******************************************************************
 * player.h
 * Name: Apurva Gandhi
 * Email:ahgand22@g.holycross.edu 
 * Date: 02/03/2019
 * Assignment: Homework 2
 * Purpose: provides SPECIFICATION for the player.cc class
 * which implenments various functions for game "DicePoker" 
 *****************************************************************/

#include <iostream>
#include <cstdlib>

using namespace std;

const int numDice = 5;

int Randomize(int);

class Player
{
 public:
    Player( );
    void clearRank(void);
    void clearPoints(void);
    void throwDice(void);
    void showRank(void);
    int getRank(void);
    int getPoints( void );
    void addPoint(void);
 private:
    void computeRank(void);
    int diceArray[numDice];
    int rank;
    int points;
};
