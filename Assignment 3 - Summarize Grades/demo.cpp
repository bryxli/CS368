#include "SummarizeGrades.h"

int main(){
  //test readGradeFile
  int *numberOfStudents=new int;
  int *numberOfAssignments=new int;
  map<int,Name> studentMap;
  map<int,vector<int>> studentScores;
  readGradeFile("unformatted_grades.txt",numberOfStudents,numberOfAssignments,studentMap,studentScores);
  cout<<*numberOfStudents<<" "<<*numberOfAssignments<<endl;
  for(auto i:studentMap)
    cout<<i.first<<" "<<i.second.firstName<<" "<<i.second.lastName<<endl;
  for(auto i:studentScores){
    cout<<i.first<<" ";
    for(auto j:i.second)
      cout<<j<<" ";
    cout<<endl;
  }

  //test formatCaseOfNames
  formatCaseOfNames(studentMap);
  for(auto i:studentMap)
    cout<<i.first<<" "<<i.second.firstName<<" "<<i.second.lastName<<endl;

  //test computeTotalAndPercent
  map<int,int> total;
  map<int,float> percent;
  computeTotalAndPercent(studentScores,total,percent);
  for(auto i:total){
    cout<<i.first<<" "<<i.second<<endl;
  }
  for(auto i:percent){
    cout<<i.first<<" "<<i.second<<endl;
  }

  //test writeFormattedGrades
  writeFormattedGrades("formatted_grades.txt",studentMap,total,percent);
}
