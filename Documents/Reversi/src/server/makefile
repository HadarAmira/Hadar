ReversiGame.out: compileAll
	g++ *.o -pthread -o ./server.out
	rm -f *.o

compileAll: *.h *.cpp
	    g++ -c -pthread *.cpp

run:
	./server.out 
