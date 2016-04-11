#include <iostream>
#include "sqlite3.h"
#include <cstdlib>
#include <cstring>
#include <dlfcn.h>
using namespace std;

int main() {
    sqlite3 *db;
    int retval; // for checking function return values, for error codes

    // open the database, creating the file if it doesn't exist
    retval = sqlite3_open("test.db", &db);
    if(retval != 0)
    {
        cout << "Cannot open test.db: " << sqlite3_errcode(db) << endl;
        exit(1);
    }
    cout << "Successfully opened." << endl;

    cout << "Creating a table..." << endl;
    char *errmsg;
    retval = sqlite3_exec(db, "CREATE TABLE mytable (id int, val text, x double);", NULL, NULL, &errmsg);
    if(retval != SQLITE_OK)
    {
        cout << "Error in previous command: " << errmsg << endl;
        sqlite3_free(errmsg);
    }

    retval = sqlite3_exec(db, "INSERT INTO mytable VALUES (1, \"hello\", 2.1), (2, \"goodbye\", -0.3);", NULL, NULL, &errmsg);
    if(retval != SQLITE_OK)
    {
        cout << "Error in previous command: " << errmsg << endl;
        sqlite3_free(errmsg);
    }

    // SELECT queries
    sqlite3_stmt *s;
    const char *sql = "SELECT * FROM mytable ORDER BY id";
    retval = sqlite3_prepare(db, sql, strlen(sql), &s, NULL);
    if(retval != SQLITE_OK)
    {
        cout << "Error in preparing statement." << endl;
    }
    while(sqlite3_step(s) == SQLITE_ROW)
    {
        int id = sqlite3_column_int(s, 0);
        const unsigned char *val = sqlite3_column_text(s, 1);
        double x = sqlite3_column_double(s, 2);
        cout << "ID = " << id << ", val = " << val << ", x = " << x << endl;
    }
    sqlite3_finalize(s);



    sqlite3_close(db);

    return 0;
}
