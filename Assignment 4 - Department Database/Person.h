/*
Header file that declares the methods for Person.
*/
#ifndef PERSON_H
#define PERSON_H
#include <string>
#include <vector>
#include <iostream>
using namespace std;

/**
 * Enum to declare type of Person
 */
enum classType {PER, EMP, STU, FAC, TA};

class Person{
  friend class Student;
  friend class Faculty;
  friend class Employee;
  friend class TeachingAssistant;

public:
  /**
   * Default constructor
   */
  Person();

  /**
   * Person constructor
   */
  Person(string name,int ID,classType type,vector<int>* courseId);

  /**
   * Displays details of Person
   */
  virtual void displayDetails();

  /**
   * Getter method to return courseId
   */
  vector<int>* getCourseId();

  /**
   * Getter method to return type
   */
  classType getClassType();

  /**
   * Getter method to return name
   */
  string getName();

private:
  string name;
  int ID;
  classType type;
  vector<int>* courseId;
};

#endif
