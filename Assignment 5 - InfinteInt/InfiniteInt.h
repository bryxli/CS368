/*
Header file that declares the methods for Employee.
*/
#ifndef INFINT_H
#define INFINT_H

#include <vector>
#include <string>

using namespace std;

class InfiniteInt{

public:
InfiniteInt();

InfiniteInt(unsigned long long val);

explicit InfiniteInt(vector<unsigned int>* new_digits);

InfiniteInt(const InfiniteInt &obj);

~InfiniteInt();

vector<unsigned int>* getDigits(){return digits;}

InfiniteInt& operator=(const InfiniteInt &);

ostream& operator<<(ostream&);

istream& operator>>(istream&);

bool operator<(const InfiniteInt &);

bool operator>(const InfiniteInt &);

bool operator<=(const InfiniteInt &);

bool operator>=(const InfiniteInt &);

bool operator==(const InfiniteInt &);

bool operator!=(const InfiniteInt &);

InfiniteInt operator+(const InfiniteInt &);

InfiniteInt operator-(const InfiniteInt &);

InfiniteInt operator+=(const InfiniteInt &);

InfiniteInt operator-=(const InfiniteInt &);

InfiniteInt operator++();

InfiniteInt operator--();

InfiniteInt operator++(int);

InfiniteInt operator--(int);

private:
vector<unsigned int>* digits;
const unsigned int radix=10;
};

#endif
