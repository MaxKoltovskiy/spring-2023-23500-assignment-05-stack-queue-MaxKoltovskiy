tests: Node.o stack.o tests.o 
	g++ -o tests tests.o stack.o Node.o 

Node.o: Node.cpp Node.h
stack.o: stack.cpp stack.h Node.h
tests.o: tests.cpp doctest.h stack.h Node.h

clean: 
	rm -f *.o 
