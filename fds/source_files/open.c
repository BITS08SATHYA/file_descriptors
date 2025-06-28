//
// Created by sathipa on 28/6/25.
//
#include <stdio.h>
#include <fcntl.h>
#include <errno.h>

void main(){
    int fd;
//    fd = open("startup", O_RDONLY);
    int rd = open("newFile.log", O_RDWR | O_CREAT, 0774);
    if (rd == -1){
        printf("\n open() was failed - errno = (%d)\n", errno);
        perror("Error: ");
    }else{
        printf("\n open() system call executed successfully, the file descriptor of opened file is (%d)\n", fd);
    }
}