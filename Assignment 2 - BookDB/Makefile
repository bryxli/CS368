CXX=g++
CXXFLAGS=-Wall

all: build

BookDB.o: BookDB.h

clean:
	-rm BookDB.o
	-rm BookDB

build: demo.cpp BookDB.o
	$(CXX) $(CXXFLAGS) -o BookDB demo.cpp BookDB.o
