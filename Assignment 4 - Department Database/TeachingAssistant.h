/*
Header file that declares the methods for TeachingAssistant.
*/
#ifndef TEACHINGASSISTANT_H
#define TEACHINGASSISTANT_H
#include "Employee.h"
#include "Student.h"

class TeachingAssistant: virtual public Employee, virtual public Student{
public:
  /**
   * Default constructor
   */
  TeachingAssistant();

  /**
   * TeachingAssistant constructor
   */
  TeachingAssistant(string name,int ID,vector<int>* courseId,classType type,vector<float>* grade,int officeNum,int officeHours, int TAcourse);

  /**
   * Displays details of TeachingAssistant
   */
  virtual void displayDetails();

private:
  int officeHours;
  int TAcourse;
};

#endif
