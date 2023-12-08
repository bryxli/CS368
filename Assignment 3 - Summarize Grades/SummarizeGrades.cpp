/*
File that defines the methods of the program.
*/
#include "SummarizeGrades.h"
#include <fstream>
#include <iomanip>

void readGradeFile(const string inputFilepath, int *numberOfStudents, int *numberOfAssignments,
map<int, Name> &studentNames, map<int, vector<int>> &studentScores){
  ifstream file(inputFilepath);
  if(file.is_open()){
    string line;
    int counter;
    for(int i=0;i<2;i++){
      getline(file,line);
      counter=0;
      while(line[counter]!=' ')
        counter++;
      if(i==0)
        *numberOfStudents=stoi(line.substr(counter+1));
      else
        *numberOfAssignments=stoi(line.substr(counter+1));
    }
    getline(file,line);
    for(int i=0;i<*numberOfStudents;i++){
      getline(file,line);
      int id=stoi(line);
      int counter=6;
      int start=counter;
      string first, last;
      while(line[counter]!=' ')
        counter++;
      first=line.substr(start,counter-start);
      start=++counter;
      while(line[counter]!=' ')
        counter++;
      last=line.substr(start,counter-start);
      struct Name name={first,last};
      vector<int> numbers;
      for(int j=0;j<*numberOfAssignments;j++){
        start=++counter;
        while(line[counter]!=' ')
          counter++;
        numbers.push_back(stoi(line.substr(start,counter-start)));
      }
      studentNames.insert({id,name});
      studentScores.insert({id,numbers});
    }
    file.close();
  }
}

void formatCaseOfNames(map<int, Name> &names){
  for(auto &i:names){
    for(char &j:i.second.firstName){
      if(j>='A'&&j<='Z')
        j=j+32;
    }
    for(char &j:i.second.lastName){
      if(j>='A'&&j<='Z')
        j=j+32;
    }
    if(i.second.firstName[0]>96)
      i.second.firstName[0]=i.second.firstName[0]-32;
    if(i.second.lastName[0]>96)
      i.second.lastName[0]=i.second.lastName[0]-32;
  }
}

void computeTotalAndPercent(map<int, vector<int>> &scores, map<int, int> &total, map<int, float>
&percent){
  for(auto i:scores){
    int counter=0;
    float totalScore=0;
    for(auto j:i.second){
      counter++;
      totalScore+=j;
    }
    total.insert({i.first,totalScore});
    percent.insert({i.first,totalScore/counter*10});
  }
}

void writeFormattedGrades(const string outputFilepath, map<int, Name> &names, map<int, int> &total,
map<int, float> &percent){
  ofstream output(outputFilepath);
  for(auto i:names){
    string out=i.second.lastName+", "+i.second.firstName;
    string number;
    for(auto j:total){
      if(j.first==i.first){
        number=to_string(j.second);
        break;
      }
    }
    int counter=number.length();
    for(int j=out.length();j<22-counter;j++){
      out+=" ";
    }
    out+=number;
    for(auto j:percent){
      if(j.first==i.first){
        string decimal=to_string(j.second);
        counter=0;
        while(decimal[counter]!='.')
          counter++;
        counter++;
        for(int k=out.length();k<28-counter;k++)
          out+=" ";
        output<<out;
        output<<fixed<<setprecision(1)<<j.second;
        break;
      }
    }
    output<<endl;
  }
  output.close();
}
