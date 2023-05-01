OBJECTS = Node.o stack.o queue.o

main: main.o $(OBJECTS)
	g++ -o main main.o $(OBJECTS)

tests: tests.o $(OBJECTS)
	g++ -o tests tests.o $(OBJECTS)

main.o: main.cpp stack.h Node.h queue.h
Node.o: Node.cpp Node.h
stack.o: stack.cpp stack.h Node.h
tests.o: tests.cpp doctest.h stack.h Node.h queue.h
queue.o: queue.cpp queue.h

clean: 
	rm -f *.o 
