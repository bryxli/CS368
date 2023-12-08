/*
Header file that declares the the BattleShip class.
*/
#ifndef BATTLESHIP_MAIN_H
#define BATTLESHIP_MAIN_H

#include <random>
#include <vector>
#include "Point.h"
#include "Ship.h"
#include "Board.h"

constexpr unsigned MAX_X{10};
constexpr unsigned MAX_Y{10};

std::vector<Ship<MAX_X,MAX_Y>> player;
std::vector<Ship<MAX_X,MAX_Y>> computer;
Board<MAX_X,MAX_Y> pBoard(false);
Board<MAX_X,MAX_Y> cBoard(true);

/**
 * Structure that defines a ship
 */
struct DefShip {
  unsigned len;
  std::string name;
};

std::vector<DefShip> ships {{2, "destroyer"},
                            {3, "cruiser"},
                            {3, "submarine"},
                            {4, "battleship"},
                            {5, "carrier"}};

/**
 * Initializes the board and players
 */
void initGame();

/**
 * Places the ships on the board
 */
void placeShips(std::default_random_engine &rand);

/**
 * Starts the game
 */
void playGame(std::default_random_engine &rand);

/**
 * Checks to see if a player has lost
 * @return true if the player has lost, otherwise false
 */
bool checkLost(std::vector<Ship<MAX_X,MAX_Y>> &ships);

/**
 * Shoots a cannon
 * @param shot - the point to shoot at
 * @param ships - the ships to check if shot at
 * @param board - the board played one
 */
void doShot(Point<MAX_X,MAX_Y> &shot, std::vector<Ship<MAX_X,MAX_Y>> &ships, Board<MAX_X,MAX_Y> &board);

/**
 * Prints the boards
 */
void printBoards();

#endif
