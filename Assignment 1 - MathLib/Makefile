CXX=g++
CXXFLAGS=-Wall

all:build

MathLib.o: MathLib.h

clean:
	-rm MathLib.o

build: MathLib.cpp demo.cpp MathLib.o 
	$(CXX) $(CXXFLAGS) -o  MathLib.cpp demo.cpp MathLib.o
