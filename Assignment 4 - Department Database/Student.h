/*
Header file that declares the methods for Student.
*/
#ifndef STUDENT_H
#define STUDENT_H
#include "Person.h"

class Student: virtual public Person{
friend class TeachingAssistant;

public:
  /**
   * Default constructor
   */
  Student();

  /**
   * Student constructor
   */
  Student(string name,int ID,vector<int>* courseId,classType type,vector<float>* grade);

  /**
   * Displays details of Student
   */
  virtual void displayDetails();

private:
  vector<float>* grade;
  float average;

  /**
   * Calculates average of classes
   */
  void calcAverage(){
    float total;
    for(auto i:*grade){
      total+=i;
    }
    average=total/(grade->size());
  }
};

#endif
