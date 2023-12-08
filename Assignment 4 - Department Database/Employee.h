/*
Header file that declares the methods for Employee.
*/
#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include "Person.h"

class Employee: virtual public Person{
friend class Faculty;
friend class TeachingAssistant;

public:
  /**
   * Default constructor
   */
  Employee();

  /**
   * Employee constructor
   */
  Employee(string name,int ID,vector<int>* courseId,classType type,int officeNum);

  /**
   * Displays details of Employee
   */
  virtual void displayDetails();

private:
  int officeNum;
};

#endif
