#Tells the compiler what to do after running the make command

CXX=g++
CXXFLAGS=-Wall

all: build

InfiniteInt.o: InfiniteInt.h

clean:
	-rm InfiniteInt.o
	-rm InfiniteInt

build: demo.cpp InfiniteInt.o
	$(CXX) $(CXXFLAGS) -o InfiniteInt demo.cpp InfiniteInt.o
