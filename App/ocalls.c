// This is a real implementation of ocalls

#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>

int ocall_lstat(const char *path, struct stat* buf){
    return lstat(path, buf);
}

int ocall_stat(const char *path, struct stat* buf){
    return stat(path, buf);
}
int ocall_fstat(int fd, struct stat* buf){
    return fstat(fd, buf);
}
int ocall_ftruncate(int fd, off_t length){
    return ftruncate(fd, length);
}
