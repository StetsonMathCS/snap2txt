#ifndef DATABASE_H
#define DATABASE_H

#include <iostream>
#include "sqlite3.h"
#include <cstdlib>
#include <cstring>
#include <dlfcn.h>
using namespace std;


class Database
{
	private:
		sqlite3 *db;
		
	public:
		//Constructor creates database
		Database(const char *dbfile);
		//Insert values into database
		void insert(const char *filename, const char *extractedText, const char *date);
		//Closes database
		void close();
		
};

#endif
