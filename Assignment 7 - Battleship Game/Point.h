/*
Header file that declares the the Status class.
*/
#ifndef POINT_H
#define POINT_H
#include <iostream>
enum Status {EMPTY,SHIP,MISS,HIT};

class Point{
  friend class Ship;
  friend class Board;
public:
  /**
   * Builds a Point
   * @param char - converted to unsigned
   * @param unsigned - coordinate
   */
  Point(char,unsigned);

  /**
   * Builds a Point
   * @param unsigned - coordinate
   */
  Point(unsigned,unsigned);

  /**
   * Getter method to return x
   */
  int getX(){return x;}

  /**
   * Getter method to return y
   */
  int getY(){return y;}

  /**
   * Overloads operator to compare Points
   */
  bool operator==(Point a);

  /**
   * Overloads operator to print to ostream
   */
  std::ostream &operator<<(Point);

  /**
   * Converts a coordinate to a char
   * @param unsigned - the coordinate
   */
  static char xToChar(unsigned);

  /**
   * Converts a char into a coordinate
   * @param char - the char
   */
  static unsigned xToInt(char);

  /**
   * Getter method to return the status
   */
  Status getStatus() const{
    return status;
  }

private:
  unsigned x=10;
  unsigned y=10;
  Status status;
};

#endif
