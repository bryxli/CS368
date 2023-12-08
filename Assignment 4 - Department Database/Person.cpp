/*
Defines the constructors and methods for Person
*/
#include "Person.h"

Person::Person(){
  name="Unknown Person";
  ID=-1;
  courseId=NULL;
  type=classType::PER;
}

Person::Person(string name,int ID,classType type,vector<int>* courseId){
  this->name=name;
  this->ID=ID;
  this->type=type;
  this->courseId=courseId;
}

void Person::displayDetails(){
  string thistype;
  switch(type){
    case PER:
      thistype="Person";
      break;
    case EMP:
      thistype="Employee";
      break;
    case STU:
      thistype="Student";
      break;
    case FAC:
      thistype="Faculty";
      break;
    case TA:
      thistype="TA";
      break;
  }
  cout<<thistype<<endl<<"Name: "<<name<<endl<<"ID: "<<ID<<endl;
}

vector<int>* Person::getCourseId(){
  return courseId;
}

classType Person::getClassType(){
  return type;
}

string Person::getName(){
  return name;
}
