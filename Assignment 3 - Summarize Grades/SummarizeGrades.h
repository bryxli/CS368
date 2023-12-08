/*
Header file that declares the struct and the methods.
*/
#ifndef IFNDEF_H
#define IFNDEF_H

#include <string>
#include <vector>
#include <map>
#include <iostream>

using namespace std;

/**
 * Name structure that holds all the student names
 */
struct Name{
  string firstName;
  string lastName;
};

/**
 * Reads a file and saves information from it
 * @param inputFilepath the file name or path to read from
 * @param numberOfStudents the pointer to store the number of students.
 * @param numberOfAssignments the pointer to store the number of assignments
 */
void readGradeFile(const string inputFilepath, int *numberOfStudents, int *numberOfAssignments,
map<int, Name> &studentNames, map<int, vector<int>> &studentScores);

/**
 * Formats the names of the students so that all but the first letter are lower case
 * @param names the map that holds all the names of the students
 */
void formatCaseOfNames(map<int, Name> &names);

/**
 * Computes the total and percentages of the students
 * @param scores the map that holds the existing scores of the students
 * @param total the map to store the total scores of the students
 * @param percent the map to store the percentages of the students
 */
void computeTotalAndPercent(map<int, vector<int>> &scores, map<int, int> &total, map<int, float>
&percent);

/**
 * Writes a new file that holds the formatted names, totals, and percents
 * @param outputFilepath the file name or path to write to
 * @param names the map that holds the names of the students
 * @param total the map that holds the totals of the students
 * @param percent the map that holds the percents of the students
 */
void writeFormattedGrades(const string outputFilepath, map<int, Name> &names, map<int, int> &total,
map<int, float> &percent);

#endif
