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
	sqlite3_stmt *s;
	const char *test;
	char *query;

	//Insert data item into snaps
	query = "INSERT INTO snaps (filename, exText, date) values (?,?,?)";	

	retval = sqlite3_prepare(db, query, strlen(query), &s, &test);

	if (retval == SQLITE_OK) {
		//Bind text
		sqlite3_bind_text(s, 1, fName, strlen(fName), 0);
		sqlite3_bind_text(s, 2, eText, strlen(eText), 0);
		sqlite3_bind_text(s, 3, fDate, strlen(fDate), 0);
	}
		
	if(retval != SQLITE_OK)
	{
		cout << "Error in previous command: " << errmsg << endl;
		sqlite3_free(errmsg);
	}
	
	retval = sqlite3_exec(db, query, NULL, NULL, &errmsg);

	//Commit
	sqlite3_step(s);
	sqlite3_finalize(s);
}

void Database::close(){
	sqlite3_close(db);
}
