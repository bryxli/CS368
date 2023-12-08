/*
Header file that declares the methods for DisplayUtility.
*/
#ifndef IFNDEF_H
#define IFNDEF_H
#include "Person.h"

/**
 * Displays all names that are students
 * @param v vector of Person that holds the people
 * @param courseID course number
 */
void displayAllStudentNames(vector<Person *>v,int courseID);

/**
 * Displays all names
 * @param v vector of Person that holds the people
 * @param courseID course number
 */
void displayAllPersonNames(vector<Person *>v,int courseID);

#endif
