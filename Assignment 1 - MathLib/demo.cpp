#include "MathLib.h"
#ifndef IFNDEF_H
#define IFNDEF_H
#include <iostream>
#include <string>
#endif

int  main(){
  int x=-1;
  long y=-1;
  double z=-1.5;
  std::cout << absVal(x) << std::endl;
  std::cout << absVal(y) << std::endl;
  std::cout << absVal(z) <<std:: endl;
  std::cout << ceiling(-42.0000000001) << std::endl;
  std::cout << floor(-42.000001) <<std:: endl;
  std::cout << round(-42.9)<< std::endl;
  std::cout << round(-42.000001,RoundingRule::ROUND_DOWN)<<std ::endl;
  std::cout << round(1.5,RoundingRule::ROUND_UP  )<<std ::endl;
  std::cout << round(1.5,RoundingRule::ROUND_TO_ZERO) << std::endl;
  std::cout << round(1.5,RoundingRule::ROUND_AWAY_ZERO) << std::endl;
  std::cout << round(1.5,RoundingRule::ROUND_HALF_DOWN) << std::endl;
  std::cout << round(1.5,RoundingRule::ROUND_HALF_TO_ZERO) << std::endl;
  std::cout << round(1.5,RoundingRule::ROUND_HALF_AWAY_ZERO) << std::endl;
  std::cout << round(1.5,RoundingRule::ROUND_HALF_TO_EVEN) << std::endl;
  std::cout << round(-42.5,RoundingRule::ROUND_HALF_TO_ODD) << std::endl;
  std::cout << pow(2,2) << std::endl;
  std::cout << toString(12348,29,true) << std::endl;
  std::cout << gcd(12,16) << std::endl;
}
