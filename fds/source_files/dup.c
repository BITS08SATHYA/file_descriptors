//
// Created by sathipa on 29/6/25.
//
#include <stdio.h>
#include <fcntl.h>
#include <errno.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

void main(){
    int fd;
    int newfd;
    fd = open("../newFile.log", O_RDWR | O_CREAT , 0767);
    if (fd == -1){
        printf("\n open() was failed - errno = (%d)\n" , errno);
        perror("Error: ");
        exit(1);
    }else{
        printf("open() system call executed successfully, initial fd value is (%d) \n", fd);
    }

    const char *msg1 = "Writing using file descriptor obtained from dup() system call \n";
    const char *msg2 = "writing using original file descriptor obtained from open() system call \n";

    newfd = dup(fd);

    printf("\n new fd value after dup() is (%d), oldfd value of file is (%d)\n" , newfd, fd);

//    write(newfd, "Writing using file descriptor obtained from dup() system call \n", 70);
//    write(fd, "writing using original file descriptor obtained from open() system call \n", 80);
    write(newfd, msg1, strlen(msg1));
    write(fd, msg2, strlen(msg2));
//    write(fd, "writing using original file descriptor obtained from open() system call \n", 80);
}