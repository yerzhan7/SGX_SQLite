# SGX_SQLite
SQLite database inside a secure Intel SGX enclave (Linux).

You can execute your SQL statements securely. The official SQLite library ("sqlite.c", "sqlite.h") is entirely loaded into an enclave.
However, if you want to save your database (i.e. not in-memory database) it will save *.db file without any encryption yet. (need to implement data sealing in the future)

SQLite Version - 3.19.3

The project started from "SampleEnclave" provided by Intel SGX SDK. Later, I've added official SQLite library, and then redirected all system calls to ocalls (untrusted part).
You can track the development from scratch by viewing all commits.

This project may act as guide on how to port C applications inside Intel SGX enclave on Linux.

# Prerequisites:
* Ubuntu* Desktop-16.04-LTS 64bits
* Intel SGX SDK, SGX Driver, SGX PSW from https://github.com/01org/linux-sgx
* 6th Generation Intel(R) Core(TM) Processor or newer (only if you want to run it in hardware mode, otherwise run in software/simulation mode)

# What's Included
* **App/** - directory for untrusted part of the application
  * **App.cpp** - main file for our app
  * **ocalls.c** - implementations of untrusted ocalls in C
* **Enclave/** - directory for trusted part of the application
  * **Enclave.config.xml** - enclave config file (same as in SampleEnclave from Intel)
  * **Enclave.cpp** - implementations of trusted ecalls in C++
  * **Enclave.edl** - enclave interface file for declarations of all ecalls and ocalls
  * **Enclave.lds** - lds file (same as in SampleEnclave from Intel)
  * **Enclave_private.pem** - enclave private key (same as in SampleEnclave from Intel)
  * **ocall_interface.c** - implementations of redirected system calls from sqlite3.c (not all syscalls implemented)
  * **sqlite3.c** - official SQLite amalgamation (made minor changes to correctly redirect syscalls - see commit history)
  * **sqlite3.h** - official SQLite amalgamation (unchanged)
* **ocall_types.h** - declarations of some stdlib types for need for edl file (since stlib is untrusted)
  
# Building
`make` for simple simulation mode (unsecure)

`make SGX_MODE=HW SGX_DEBUG=0 SGX_PRERELEASE=1` for hardware mode in pre-release mode

`make SGX_MODE=HW SGX_DEBUG=0 SGX_PRERELEASE=0` for hardware mode in a secure release mode (but you need to sign your enclave first)

# Running
`./app test.db` to create test.db 
