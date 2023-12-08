/**
MathLib is a library of Math functions including absolute value, ceiling, floor, etc.
Sources: https://www.tutorialspoint.com/computer_logical_organization/number_system_conversion.html
Used for toString() method
*/
#ifndef IFNDEF_H
#define IFNDEF_H
#include <iostream>
#include <string>
#endif

enum RoundingRule {ROUND_DOWN, ROUND_UP, ROUND_TO_ZERO, ROUND_AWAY_ZERO, ROUND_HALF_UP, ROUND_HALF_DOWN, ROUND_HALF_TO_ZERO, ROUND_HALF_AWAY_ZERO, ROUND_HALF_TO_EVEN, ROUND_HALF_TO_ODD};

/**
 * Calculates the absolute value of a number.
 * @param x An int
 * @return The absolute value of x
 */
int absVal(int x);

/**
 * Calculates the absolute value of a number.
 * @param x A long
 * @return The absolute value of x
 */
long absVal(long x);

/**
 * Calculates the absolute value of a number.
 * @param x A double
 * @return The absolute value of x
 */
double absVal(double x);

/**
 * Calculates the ceiling of a number.
 * @param x A double
 * @return The ceiliing of x
 */
long ceiling(double x);

/**
 * Calculates the floor of a number.
 * @param x A double
 * @return The floor of x
 */
long floor(double x);

/**
 * Rounds a number to RoudingRule ROUND_HALF_UP.
 * @param x A double
 * @return The rounded number of x using ROUND_HALF_UP
 */
long round(double x);

/**
 * Rounds a number to following the given RoundingRule.
 * @param x A double
 * @param y A RoundingRule
 * @return The rounded number of x using y
 */
long round(double x,RoundingRule y);

/**
 * Calculates the power of a number.
 * @param x A double
 * @param y A long
 * @return The yth power of x
 */
double pow(double x, long y);

/**
 * Converts a number in base ten into one of a different base.
 * @param x An int
 * @param radix An unsigned int
 * @param x A boolean
 * @return A string holding num of base radix
 */
std::string toString(int num, unsigned int radix, bool x);

/**
 * Calculates the greatest common denominator of two numbers.
 * @param x An int
 * @param y An int
 * @return The greatest common denominator of x and y
 */
int gcd(int x, int y);
