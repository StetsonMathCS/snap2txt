all: main

main: main.o sqlite3.o
	g++ -lpthread -ldl -o main main.o sqlite3.o

main.o: main.cpp sqlite3.h
	g++ -c main.cpp

# Use gcc to compile this C code
sqlite3.o: sqlite3.h sqlite3.c
	gcc -c sqlite3.c
