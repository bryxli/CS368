/*
Header file that declares the the Ship class.
*/
#ifndef SHIP_H
#define SHIP_H
#include <string>
#include <vector>
#include "Point.h"
enum Direction{VERTICAL,HORIZONTAL};

class Ship{
public:
  /**
   * Constructs a ship with a name and location
   * @param string - the name
   * @param vector - the points of the ship
   */
  Ship(std::string, const std::vector<Point*>);

  /**
   * Setter method to change the ship name
   * @param name - the name to change to
   */
  void setName(std::string name){this->name=name;}

  /**
   * Getter method to return name
   */
  std::string getName(){return name;}

  /**
   * Checks if the ship is hit
   * @return true if hit, otherwise false
   */
  bool isHit (const Point &) const;

  /**
   * Checks if the ship has been sunk
   * @return true if sunk, otherwise false
   */
  bool isSunk() const;

private:
  unsigned x;
  unsigned y;
  std::string name;
  std::vector<Point>* ship;
};

#endif
