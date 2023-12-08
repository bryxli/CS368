CXX=g++
CXXFLAGS=-Wall

all: build

SummarizeGrades.o: SummarizeGrades.h

clean:
	-rm SummarizeGrades.o
	-rm SummarizeGrades

build: demo.cpp SummarizeGrades.o
	$(CXX) $(CXXFLAGS) -o SummarizeGrades demo.cpp SummarizeGrades.o
