#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <sys/time.h>

// At this point we have already definitions needed for  ocall interface, so:
#define DO_NOT_REDEFINE_FOR_OCALL
#include "Enclave_t.h"

long int sysconf(int name){
    char error_msg[256];
    snprintf(error_msg, sizeof(error_msg), "%s%s", "Error: no ocall implementation for ", __func__);
    ocall_print_error(error_msg);
    return 0;
}

int open64(const char *filenamr, int oflag, ...){
    char error_msg[256];
    snprintf(error_msg, sizeof(error_msg), "%s%s", "Error: no ocall implementation for ", __func__);
    ocall_print_error(error_msg);
    return 0;
}

off_t lseek64(int fd, off_t offset, int whence){
    char error_msg[256];
    snprintf(error_msg, sizeof(error_msg), "%s%s", "Error: no ocall implementation for ", __func__);
    ocall_print_error(error_msg);
    return 0;
}

int gettimeofday(struct timeval *tv, struct timezone *tz){
    char error_msg[256];
    snprintf(error_msg, sizeof(error_msg), "%s%s", "Error: no ocall implementation for ", __func__);
    ocall_print_error(error_msg);
    return 0;
}

unsigned int sleep(unsigned int seconds){
    char error_msg[256];
    snprintf(error_msg, sizeof(error_msg), "%s%s", "Error: no ocall implementation for ", __func__);
    ocall_print_error(error_msg);
    return 0;
}

void *dlopen(const char *filename, int flag){
    char error_msg[256];
    snprintf(error_msg, sizeof(error_msg), "%s%s", "Error: no ocall implementation for ", __func__);
    ocall_print_error(error_msg);
}

char *dlerror(void){
    char error_msg[256];
    snprintf(error_msg, sizeof(error_msg), "%s%s", "Error: no ocall implementation for ", __func__);
    ocall_print_error(error_msg);
    return 0;
}

void *dlsym(void *handle, const char *symbol){
    char error_msg[256];
    snprintf(error_msg, sizeof(error_msg), "%s%s", "Error: no ocall implementation for ", __func__);
    ocall_print_error(error_msg);

}

int dlclose(void *handle){
    char error_msg[256];
    snprintf(error_msg, sizeof(error_msg), "%s%s", "Error: no ocall implementation for ", __func__);
    ocall_print_error(error_msg);
    return 0;
}

int utimes(const char *filename, const struct timeval times[2]){
    char error_msg[256];
    snprintf(error_msg, sizeof(error_msg), "%s%s", "Error: no ocall implementation for ", __func__);
    ocall_print_error(error_msg);
    return 0;
}

struct tm *localtime(const time_t *timep){
    char error_msg[256];
    snprintf(error_msg, sizeof(error_msg), "%s%s", "Error: no ocall implementation for ", __func__);
    ocall_print_error(error_msg);
    return 0;
}

pid_t getpid(void){
    char error_msg[256];
    snprintf(error_msg, sizeof(error_msg), "%s%s", "Error: no ocall implementation for ", __func__);
    ocall_print_error(error_msg);
    return 0;
}

int fsync(int fd){
    char error_msg[256];
    snprintf(error_msg, sizeof(error_msg), "%s%s", "Error: no ocall implementation for ", __func__);
    ocall_print_error(error_msg);
    return 0;
}

time_t time(time_t *t){
    char error_msg[256];
    snprintf(error_msg, sizeof(error_msg), "%s%s", "Error: no ocall implementation for ", __func__);
    ocall_print_error(error_msg);
    return 0;
}

int close(int fd){
    char error_msg[256];
    snprintf(error_msg, sizeof(error_msg), "%s%s", "Error: no ocall implementation for ", __func__);
    ocall_print_error(error_msg);
    return 0;
}

int access(const char *pathname, int mode){
    char error_msg[256];
    snprintf(error_msg, sizeof(error_msg), "%s%s", "Error: no ocall implementation for ", __func__);
    ocall_print_error(error_msg);
    return 0;
}

char *getcwd(char *buf, size_t size){
    char error_msg[256];
    snprintf(error_msg, sizeof(error_msg), "%s%s", "Error: no ocall implementation for ", __func__);
    ocall_print_error(error_msg);
    return 0;
}

int sgx_lstat(const char *path, struct stat *buf){
    int ret;
    sgx_status_t status = ocall_lstat(&ret, path, buf, sizeof(struct stat));
    if (status != SGX_SUCCESS) {
        char error_msg[256];
        snprintf(error_msg, sizeof(error_msg), "%s%s", "Error: when calling ocall_", __func__);
        ocall_print_error(error_msg);
    }
    return ret;
}

int sgx_stat(const char *path, struct stat *buf){
    int ret;
    sgx_status_t status = ocall_stat(&ret, path, buf, sizeof(struct stat));
    if (status != SGX_SUCCESS) {
        char error_msg[256];
        snprintf(error_msg, sizeof(error_msg), "%s%s", "Error: when calling ocall_", __func__);
        ocall_print_error(error_msg);
    }
    return ret;
}

int sgx_fstat(int fd, struct stat *buf){
    int ret;
    sgx_status_t status = ocall_fstat(&ret, fd, buf, sizeof(struct stat));
    if (status != SGX_SUCCESS) {
        char error_msg[256];
        snprintf(error_msg, sizeof(error_msg), "%s%s", "Error: when calling ocall_", __func__);
        ocall_print_error(error_msg);
    }
    return ret;
}

int sgx_ftruncate(int fd, off_t length){
    int ret;
    sgx_status_t status = ocall_ftruncate(&ret, fd, length);
    if (status != SGX_SUCCESS) {
        char error_msg[256];
        snprintf(error_msg, sizeof(error_msg), "%s%s", "Error: when calling ocall_", __func__);
        ocall_print_error(error_msg);
    }
    return ret;
}

int fcntl(int fd, int cmd, ... /* arg */ ){
    char error_msg[256];
    snprintf(error_msg, sizeof(error_msg), "%s%s", "Error: no ocall implementation for ", __func__);
    ocall_print_error(error_msg);
    return 0;
}

ssize_t read(int fd, void *buf, size_t count){
    char error_msg[256];
    snprintf(error_msg, sizeof(error_msg), "%s%s", "Error: no ocall implementation for ", __func__);
    ocall_print_error(error_msg);
    return 0;
}

int fchmod(int fd, mode_t mode){
    char error_msg[256];
    snprintf(error_msg, sizeof(error_msg), "%s%s", "Error: no ocall implementation for ", __func__);
    ocall_print_error(error_msg);
    return 0;
}

int unlink(const char *pathname){
    char error_msg[256];
    snprintf(error_msg, sizeof(error_msg), "%s%s", "Error: no ocall implementation for ", __func__);
    ocall_print_error(error_msg);
    return 0;
}

int mkdir(const char *pathname, mode_t mode) {
    char error_msg[256];
    snprintf(error_msg, sizeof(error_msg), "%s%s", "Error: no ocall implementation for ", __func__);
    ocall_print_error(error_msg);
    return 0;
}

int rmdir(const char *pathname){
    char error_msg[256];
    snprintf(error_msg, sizeof(error_msg), "%s%s", "Error: no ocall implementation for ", __func__);
    ocall_print_error(error_msg);
    return 0;
}

int fchown(int fd, uid_t owner, gid_t group){
    char error_msg[256];
    snprintf(error_msg, sizeof(error_msg), "%s%s", "Error: no ocall implementation for ", __func__);
    ocall_print_error(error_msg);
    return 0;
}

uid_t geteuid(void){
    char error_msg[256];
    snprintf(error_msg, sizeof(error_msg), "%s%s", "Error: no ocall implementation for ", __func__);
    ocall_print_error(error_msg);
    return 0;
}

void *mmap64(void *addr, size_t len, int prot, int flags, int fildes, off_t off){
    char error_msg[256];
    snprintf(error_msg, sizeof(error_msg), "%s%s", "Error: no ocall implementation for ", __func__);
    ocall_print_error(error_msg);
}

int munmap(void *addr, size_t length){
    char error_msg[256];
    snprintf(error_msg, sizeof(error_msg), "%s%s", "Error: no ocall implementation for ", __func__);
    ocall_print_error(error_msg);
    return 0;
}

void *mremap(void *old_address, size_t old_size, size_t new_size, int flags, ... /* void *new_address */){
    char error_msg[256];
    snprintf(error_msg, sizeof(error_msg), "%s%s", "Error: no ocall implementation for ", __func__);
    ocall_print_error(error_msg);
}

ssize_t readlink(const char *path, char *buf, size_t bufsiz){
    char error_msg[256];
    snprintf(error_msg, sizeof(error_msg), "%s%s", "Error: no ocall implementation for ", __func__);
    ocall_print_error(error_msg);
    return 0;
}
