/*
Defines the constructors and methods for Student
*/
#include "Student.h"
Student::Student():Person(name,ID,type,courseId){
  Person("Unknown student",-1,classType::STU,NULL);
  grade=NULL;
}

Student::Student(string name,int ID,vector<int>* courseId,classType type,vector<float>* grade):Person(name,ID,type,courseId){
  Person(name,ID,type,courseId);
  this->grade=grade;
  calcAverage();
}

void Student::displayDetails(){
  Person::displayDetails();
  cout<<"Courses and grades: ";
  for(unsigned int i=0;i<grade->size();i++){
    cout<<(*courseId)[i]<<":"<<(*grade)[i]<<" ";
  }
  cout<<endl<<"Average: "<<average<<endl;
}
