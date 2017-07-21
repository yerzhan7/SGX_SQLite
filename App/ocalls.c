// This is a real implementation of ocalls
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <fcntl.h>

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

int ocall_open64(const char *filename, int flags, mode_t mode){
    printf("Entering %s\n", __func__);
    return open(filename, flags, mode); // redirect it open() instead of open64()
    printf("Exiting %s\n", __func__);
}

off_t ocall_lseek64(int fd, off_t offset, int whence){
    printf("Entering %s\n", __func__);
    return lseek(fd, offset, whence); // redirect it lseek() instead of lseek64()
    printf("Exiting %s\n", __func__);
}

int ocall_read(int fd, void *buf, size_t count){
    printf("Entering %s\n", __func__);
    return read(fd, buf, count);
    printf("Exiting %s\n", __func__);
}
