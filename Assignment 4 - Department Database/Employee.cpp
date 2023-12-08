/*
Defines the constructors and methods for Employee
*/
#include "Employee.h"

Employee::Employee():Person(name,ID,type,courseId){
  Person("Unknown employee",-1,classType::EMP,NULL);
  officeNum=0;
}

Employee::Employee(string name,int ID,vector<int>* courseId,classType type,int officeNum):Person(name,ID,type,courseId){
  Person(name,ID,type,courseId);
  this->officeNum=officeNum;
}

void Employee::displayDetails(){
  Person::displayDetails();
  cout<<"Office number: "<<officeNum<<endl;
}
