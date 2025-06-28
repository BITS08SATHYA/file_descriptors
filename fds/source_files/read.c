//
// Created by sathipa on 28/6/25.
//
# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>
# include <fcntl.h>


int main(){
    int fd, sz;

    char buf[20] = {0};

    fd = open("../startup", O_RDONLY);
    if (fd < 0){
        perror("Error: ");
        exit(1);
    }

    sz = read(fd, buf, 10);
    printf("Call 1 - called read. fd = %d, %d bytes were read. \n", fd, sz);
    buf[sz] = '\0';
    printf("Read bytes are as follows: \n<%s>\n", buf);

    printf("\n Note the next set of bytes read from file, it is continuous\n");

    sz = read(fd, buf, 11);
    printf("Call 2 - called read. fd = %d, %d bytes were read. \n", fd, sz);
    buf[sz] = '\0';
    printf("Read bytes are as follows: \n<%s>\n", buf);

    sz = read(fd, buf, 10);
    printf("Call 3 - called read. fd = %d, %d bytes were read. \n", fd, sz);
    if (sz == 0){
        printf("Read bytes are as follows: \n<%s>\n", buf);
    }

    return 0;
}