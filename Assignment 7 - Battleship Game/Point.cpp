#include "Point.h"
#include <stdexcept>

Point::Point(char x,unsigned y){
  int point=xToInt(x);
  if(point>10||y>10)
    throw std::out_of_range("Out of bounds");
  this->x=point;
  this->y=y;
  status=EMPTY;
}

Point::Point(unsigned x,unsigned y){
  if(x>10||y>10)
    throw std::out_of_range("Out of bounds");
  this->x=x;
  this->y=y;
  status=EMPTY;
}

bool operator==(Point a,Point b){
  if(a.getX()==b.getX()&&a.getY()==b.getY())
    return true;
  return false;
}

std::ostream &operator<<(std::ostream &output,Point a){
  output<<"("<<a.getX()<<","<<a.getY()<<")";
  return output;
}
