/*
Defines the constructors and methods for Employee
*/
#include "Faculty.h"

Faculty::Faculty():Person(name,ID,type,courseId){
  Person("Unknown faculty",-1,classType::FAC,NULL);
  officeNum=0;
  publications=0;
}

Faculty::Faculty(string name,int ID,vector<int>* courseId,classType type,int officeNum,int publications):Person(name,ID,type,courseId){
  Person(name,ID,type,courseId);
  this->officeNum=officeNum;
  this->publications=publications;
}

void Faculty::displayDetails(){
  Person::displayDetails();
  int number=courseId->front();
  cout<<"Office number: "<<officeNum<<endl<<"Courses taught: "<<number<<endl<<"Number of publications: "<<publications<<endl;
}
