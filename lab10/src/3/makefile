#TODO: Complete the makefile

all: build

list.o: list.c
	gcc -g -c list.c -o list.o

test-list.o: test-list.c
	gcc -g -c test-list.c -o test-list.o

build: list.o test-list.o
	gcc test-list.o list.o -o test

tests: build
	./test

ltests: build
	valgrind --leak-check=full ./test

clean:
	rm -rf *.o test
