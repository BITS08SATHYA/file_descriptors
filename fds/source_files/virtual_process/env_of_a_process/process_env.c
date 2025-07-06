//
// Created by sathipa on 6/7/25.
//
#include<stdio.h>

extern char **environ;

int main(int argc, char *argv[]){
    char **ep;
    for(ep = environ; *ep != NULL; ep++){
        printf("\n (%s)", *ep);
    }

    return 0;
}