#Tells the compiler what to do after running the make command

CXX=g++
CXXFLAGS=-Wall

all: build

BattleShip.o: Point.h Board.h BattleShip.h Point.h Ship.h

clean:
	-rm BattleShip.o
	-rm BattleShip

build: demo.cpp BattleShip.o
	$(CXX) $(CXXFLAGS) -o demo.cpp BattleShip
