CXX=g++
CXXFLAGS=-Wall

all: build

DisplayUtility.o: DisplayUtility.h Employee.h Faculty.h Person.h Student.h TeachingAssistant.h

Employee.o: Employee.h

Faculty.o: Faculty.h

Person.o: Person.h

Student.o: Student.h

TeachingAssistant.o: TeachingAssistant.h

clean:
	-rm DisplayUtility.o
	-rm Employee.o
	-rm Faculty.o
	-rm Person.o
	-rm Student.o
	-rm TeachingAssistant.o
	-rm DepartmentDatabase

build: demo.cpp DisplayUtility.o Employee.o Faculty.o Person.o Student.o TeachingAssistant.o
	$(CXX) $(CXXFLAGS) -o DepartmentDatabase demo.cpp DisplayUtility.o Employee.o Faculty.o Person.o Student.o TeachingAssistant.o
