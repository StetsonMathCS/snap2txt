all: database

database: database.o sqlite3.o
	g++ -lpthread -ldl -o database database.o sqlite3.o

database.o: database.cpp database.h sqlite3.h
	g++ -c database.cpp

# Use gcc to compile this C code
sqlite3.o: sqlite3.h sqlite3.c
	gcc -c sqlite3.c
