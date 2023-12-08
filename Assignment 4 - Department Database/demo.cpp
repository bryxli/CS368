/*
File designed to test the methods of the DepartmentDatabase
*/
#include "TeachingAssistant.h"
#include "Faculty.h"
int main(){
  vector<int>* id=new vector<int>{555,666,777,888};
  vector<float>* grade=new vector<float>{100,80,90,90};
  //TeachingAssistant a("Tony Stark",111,id,classType::FAC,grade,4343,8,368);
  Employee *a=new Faculty("Bill Kerman",123,id,classType::FAC,5555,30);
  a->displayDetails();
  system("pause");
}
