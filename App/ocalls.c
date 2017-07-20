// This is a real implementation of ocalls
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>

int ocall_lstat(const char *path, struct stat* buf){
    printf("Entering %s\n", __func__);
    return lstat(path, buf);
    printf("Exiting %s\n", __func__);
}

int ocall_stat(const char *path, struct stat* buf){
    printf("Entering %s\n", __func__);
    return stat(path, buf);
    printf("Exiting %s\n", __func__);
}

int ocall_fstat(int fd, struct stat* buf){
    printf("Entering %s\n", __func__);
    return fstat(fd, buf);
    printf("Exiting %s\n", __func__);
}

int ocall_ftruncate(int fd, off_t length){
    printf("Entering %s\n", __func__);
    return ftruncate(fd, length);
    printf("Exiting %s\n", __func__);
}

char* ocall_getcwd(char *buf, size_t size){
    printf("Entering %s\n", __func__);
    return getcwd(buf, size);
    printf("Exiting %s\n", __func__);
}

int ocall_getpid(void){
    printf("Entering %s\n", __func__);
    return getpid();
    printf("Exiting %s\n", __func__);
}
