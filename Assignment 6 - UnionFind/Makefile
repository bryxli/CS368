CXX=g++
CXXFLAGS=-Wall

all: build

UnionFind.o: SetUF.h UnionFind.h Graph.h

clean:
	-rm UnionFind.o
	-rm UnionFind

build: demo.cpp UnionFind.o
	$(CXX) $(CXXFLAGS) -o demo.cpp UnionFind
