#include "MathLib.h"
#ifndef IFNDEF_H
#define IFNDEF_H
#include <iostream>
#include <string>
#endif

char letter[]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r'
	       ,'s','t','u','v','w','x','y','z'};
char capLetter[]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R'
	       ,'S','T','U','V','W','X','Y','Z'};

int absVal(int x){
  if(x<0)
    return -x;
  return x;
}

long absVal(long x){
  if(x<0)
    return -x;
  return x;
}

double absVal(double x){ 
  if(x<0)
    return -x;
  return x;
}

long ceiling(double x){
  if((x-(int)x)!=0){
    if(x>0)
      return (int)x+1;
    else
      return (int)x;
  }
  return x;
}

long floor(double x){
  if((x-(int)x)!=0){
      if(x>0)
	return (int)x;
      else
	return (int)x-1;
  }
  return x;
}

long round(double x){
  double decimal=absVal(x-(int)x);
  if(x>0){
    if(decimal>=0.5)
      return ceiling(x);
    return floor(x);
  }
  else{
    if(decimal<=0.5)
      return ceiling(x);
    return floor(x);
  }
}

long round(double x,RoundingRule y){
  double decimal=absVal(x-(int)x);
  int number;
  switch(y){
  case ROUND_DOWN:
    if(x>0){
      if(decimal>=0)
	return floor(x);
      return ceiling(x);
    }
    else{
      if(decimal<=0)
	return ceiling(x);
      return floor(x);
    }
  case ROUND_UP:
    if(x>0){
      if(decimal>=0)
	return ceiling(x);
      return floor(x);
    }
    else{
      if(decimal>=0)
	return ceiling(x);
      return floor(x);
    }
  case ROUND_TO_ZERO:
    if(x>0)
      return floor(x);
    return ceiling(x);
  case ROUND_AWAY_ZERO:
    if(x>0)
      return ceiling(x);
    return floor(x);
  case ROUND_HALF_DOWN:
    if(x>0){
      if(decimal>0.5)
	return ceiling(x);
      return floor(x);
    }
    else{
      if(decimal<0.5)
	return ceiling(x);
      return floor(x);
    }
  case ROUND_HALF_UP:
    return round(x);
  case ROUND_HALF_TO_ZERO:
    if(x>0){
      if(decimal>0.5)
	return ceiling(x);
      return floor(x);
    }
    else{
      if(decimal<=0.5)
	return ceiling(x);
      return floor(x);
    }
  case ROUND_HALF_AWAY_ZERO:
    if(x>0){
       if(decimal>=0.5)
      return ceiling(x);
    return floor(x);
     }
     else{
    if(decimal<0.5)
      return ceiling(x);
    return floor(x);
  }
  case ROUND_HALF_TO_EVEN:
    if(decimal==0.5){
      int y=x-0.5;
      if(y%2==0)
	return x-0.5;
      else
	return x+0.5;
    }
    return round(x);
  case ROUND_HALF_TO_ODD:
    if(decimal==0.5){
      int y=x-0.5;
      if(absVal(y%2)==1)
	return x-0.5;
      else
	return x+0.5;
    }
    return round(x);
  default:
    break;
  };
}

double pow(double x, long y){
  if(y==0)
    return 1;
  double answer=1;
  for(int i=0;i<absVal(y);i++)
    answer*=x;
  if(y<0)
    answer=1/answer;
  return answer;
}

std::string toString(int num, unsigned int radix, bool x){
  if(radix>36)
    return "Radix too large.";
  std::string answer="";
  bool negative=false;
  if(num<0){
    negative=true;
    num=absVal(num);
  }
  while(num>0){
    int remainder=num%radix;
    num/=radix;
    if(remainder>9){
      if(x)
	answer=letter[remainder-10]+answer;
      else
	answer=capLetter[remainder-10]+answer;
    }
    else
      answer=std::to_string(remainder)+answer;
  }
    
  if(negative)
    answer="-"+answer;
  return answer;
}

int gcd(int x, int y){
  if(y==0)
    return absVal(x);
  return gcd(y,x%y);
}
