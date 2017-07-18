#include "Enclave_t.h"
#include "sqlite3.h"

const char* secret = "Hello from enclave!";

sqlite3* db; // Database connection object

void ecall_open()
{
    ocall_print_string(secret);

    // Opening database
    const char* dbname = "test.db";
    sqlite3_open(dbname, &db);
}
