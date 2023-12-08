/*
Defines the constructors and methods for TeachingAssistant
*/
#include "TeachingAssistant.h"

TeachingAssistant::TeachingAssistant():Person(name,ID,type,courseId){
  Person("Unknown TA",-1,classType::TA,NULL);
  this->grade=NULL;
  this->officeNum=0;
  this->officeHours=0;
  this->TAcourse=0;
}

TeachingAssistant::TeachingAssistant(string name,int ID,vector<int>* courseId,classType type,vector<float>* grade,int officeNum,int officeHours, int TAcourse):Person(name,ID,type,courseId){
  Person(name,ID,type,courseId);
  this->grade=grade;
  this->officeNum=officeNum;
  this->officeHours=officeHours;
  this->TAcourse=TAcourse;
  calcAverage();
}

void TeachingAssistant::displayDetails(){
  Student::displayDetails();
  cout<<"Office number: "<<officeNum<<endl<<"Course TA: "<<TAcourse<<endl<<"Office hours: "<<officeHours<<endl;
}
