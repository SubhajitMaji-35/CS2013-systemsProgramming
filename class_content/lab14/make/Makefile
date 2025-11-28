# Implicit variables
# CC = Program for compiling C, default is gcc
# CXX = Program for compiling C++, default is g++
# CFLAGS = Extra flags to be passed to the C compiler
# CXXFLAGS = Extra flags to be passed to the C++ compiler

CC = gcc
objects := main.o test.o lib.o

# Take all object files and create final executable
all: $(objects)
	$(CC) $^ -o main

$(objects) : %.o : %.c
	$(CC) -c $^ -o $@

%.c:
	touch $@

clean:
	rm -f $(objects)
