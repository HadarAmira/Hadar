a.out: Board.o AIPlayer.o Console.o FlipRule.o Game.o main.o PcPlayer.o Point.o
	g++ Board.o Console.o FlipRule.o Game.o main.o PcPlayer.o AIPlayer.o Point.o

Board.o: Board.cpp Board.h
	g++ -c Board.cpp

Console.o: Console.cpp Console.h
	g++ -c Console.cpp
	
FlipRule.o:  FlipRule.cpp FlipRule.h
	g++ -c FlipRule.cpp

Game.o:  Game.cpp Game.h
	g++ -c Game.cpp

main.o: main.cpp
	g++ -c main.cpp

PcPlayer.o: PcPlayer.cpp PcPlayer.h
	g++ -c PcPlayer.cpp

AIPlayer.o: AIPlayer.cpp AIPlayer.h
	g++ -c AIPlayer.cpp

Point.o: Point.cpp Point.h
	g++ -c Point.cpp

run:
	./a.out
