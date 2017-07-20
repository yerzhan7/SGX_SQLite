#include "Enclave_t.h"
#include "sqlite3.h"

sqlite3* db; // Database connection object

static int callback(void *NotUsed, int argc, char **argv, char **azColName) {
   int i;

   return 0;
}

void ecall_open()
{
    int rc;
    // Opening database
    const char* dbname = "test.db";
    ocall_println_string("Creating database connection inside enclave...");
    rc = sqlite3_open(dbname, &db);
    if (rc) {
      ocall_println_string("Error: Can't open database  - ");
      ocall_println_string(sqlite3_errmsg(db));
      return;
    }




    const char* sql = "CREATE TABLE COMPANY(ID INT PRIMARY KEY NOT NULL,NAME TEXT NOT NULL, AGE INT NOT NULL, ADDRESS CHAR(50), SALARY REAL);";
    char *zErrMsg = 0;
    sqlite3_exec(db, sql, callback, 0, &zErrMsg);
    sqlite3_close(db);
}
