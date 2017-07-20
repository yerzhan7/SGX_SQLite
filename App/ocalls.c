#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>

int ocall_lstat(const char *path, struct stat* buf){
    return lstat(path, buf);
}
