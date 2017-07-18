#include "Enclave_t.h"  /* print_string */

const char* secret = "Hello from enclave!";

void ecall_open()
{
    ocall_print_string(secret);
}
