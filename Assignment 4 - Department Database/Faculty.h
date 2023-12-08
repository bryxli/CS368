/*
Header file that declares the methods for Faculty.
*/
#ifndef FACULTY_H
#define FACULTY_H
#include "Employee.h"

class Faculty: virtual public Employee{
public:
  /**
   * Default constructor
   */
  Faculty();

  /**
   * Faculty constructor
   */
  Faculty(string name,int ID,vector<int>* courseId,classType type,int officeNum,int publications);

  /**
   * Displays details of Faculty
   */
  virtual void displayDetails();

private:
  int publications;
};

#endif
