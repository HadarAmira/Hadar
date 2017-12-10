a.out: Board.o AIPlayer.o Console.o FlipRule.o Game.o main.o PcPlayer.o Point.o
	g++ Board.o Console.o FlipRule.o Game.o main.o PcPlayer.o AIPlayer.o Point.o

Board.o: src/Board.cpp src/Board.h
	g++ -c src/Board.cpp

Console.o: src/Console.cpp src/Console.h
	g++ -c src/Console.cpp
	
FlipRule.o:  src/FlipRule.cpp src/FlipRule.h
	g++ -c src/FlipRule.cpp

Game.o:  src/Game.cpp src/Game.h
	g++ -c src/Game.cpp

main.o: src/main.cpp
	g++ -c src/main.cpp

PcPlayer.o: src/PcPlayer.cpp src/PcPlayer.h
	g++ -c src/PcPlayer.cpp

AIPlayer.o: src/AIPlayer.cpp src/AIPlayer.h
	g++ -c src/AIPlayer.cpp

Point.o: src/Point.cpp src/Point.h
	g++ -c src/Point.cpp

run:
	./a.out
