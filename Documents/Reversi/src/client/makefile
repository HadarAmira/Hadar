#Name: zvi liebskind  
#ID:305798752  
#Name: Hadar Amira 
#ID: 207026527 

ReversiGame.out: compileAll
	g++ *.o -o ../../exe/client.out -pthread
	rm -f *.o

compileAll: *.h *.cpp
	    g++ -c *.cpp

run:
	./ReversiGame.out
