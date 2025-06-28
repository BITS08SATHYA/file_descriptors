//
// Created by sathipa on 28/6/25.
//
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

int main(){
    int sz;
    char buf[100];

    strcpy(buf, "This is example of O_APPEND:\n");

    int fd = open("output.txt", O_WRONLY | O_CREAT | O_APPEND, 0774);

    if (fd < 0){
        perror("Error Occured during open");
        exit(1);
    }
    printf("Length of buf is (%d)", (int)strlen(buf));
    sz = write(fd, buf, strlen(buf));

    printf("\nwrite() returned %d\n", sz);

    close(fd);
}