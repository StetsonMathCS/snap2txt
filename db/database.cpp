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
    retval = sqlite3_open("snaps.db", &db);
    if(retval != 0)
    {
        cout << "Cannot open snaps.db: " << sqlite3_errcode(db) << endl;
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

    retval = sqlite3_exec(db, "INSERT OR REPLACE INTO snaps VALUES (\"cats\", \"hello\", \"April 15, 2016\"), (\"dogs\", \"GoodBye\", \"May 9, 2016\");", NULL, NULL, &errmsg);
    if(retval != SQLITE_OK)
    {
        cout << "Error in previous command: " << errmsg << endl;
        sqlite3_free(errmsg);
    }

    // SELECT queries
    sqlite3_stmt *s;
    const char *sql = "SELECT * FROM snaps ORDER BY date";
    retval = sqlite3_prepare(db, sql, strlen(sql), &s, NULL);
    if(retval != SQLITE_OK)
    {
        cout << "Error in preparing statement." << endl;
    }
    while(sqlite3_step(s) == SQLITE_ROW)
    {
        const unsigned char *filename = sqlite3_column_text(s, 0);
        const unsigned char *exText = sqlite3_column_text(s, 1);
        const unsigned char *date = sqlite3_column_text(s, 2);
        cout << "filename = " << filename << ", extracted text = " << exText << ", date = " << date << endl;
    }
    sqlite3_finalize(s);



    sqlite3_close(db);

    return 0;
}
