#include <iostream>
#include "sqlite3.h"
#include <cstdlib>
#include <cstring>
#include <dlfcn.h>
#include "database.h"
using namespace std;

Database::Database(const char *dbfile){
	int retval; // for checking function return values, for error codes

	// open the database, creating the file if it doesn't exist
	retval = sqlite3_open(dbfile, &db);
	if(retval != 0)
	{
		cout << "Cannot open " << dbfile << ": " << sqlite3_errcode(db) << endl;
		exit(1);
	}
	cout << "Successfully opened." << endl;

	cout << "Creating a table..." << endl;
	char *errmsg;
	retval = sqlite3_exec(db, "CREATE TABLE IF NOT EXISTS snaps (filename text PRIMARY KEY, exText text, date text);", NULL, NULL, &errmsg);
	if(retval != SQLITE_OK)
	{
		cout << "Error in previous command: " << errmsg << endl;
		sqlite3_free(errmsg);
	}
}

void Database::insert(const char *fName, const char *eText, const  char *fDate){
	int retval;
	char* errmsg;

	retval = sqlite3_exec(db, "INSERT OR REPLACE INTO snaps VALUES (\"cats\", \"hello\", \"April 15, 2016\"), (\"dogs\", \"GoodBye\", \"May 9, 2016\");", NULL, NULL, &errmsg);
	
		
	if(retval != SQLITE_OK)
	{
		cout << "Error in previous command: " << errmsg << endl;
		sqlite3_free(errmsg);
	}
}

void Database::close(){
	sqlite3_close(db);
}
