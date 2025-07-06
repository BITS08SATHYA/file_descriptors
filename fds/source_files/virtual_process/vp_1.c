//
// Created by sathipa on 6/7/25.
//
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void main(int argc, char *argv[]){
    int count = 0;
    printf("\nDemonstrate the command line arguments");

    if (strstr(argv[1], "add")){
        printf("\n addition result = (%d)\n", atoi(argv[2]) + atoi(argv[3]));
    }else if(strstr(argv[1], "sub")){
        printf("\n subtraction result = (%d)\n", atoi(argv[2]) - atoi(argv[3]));
    }
    else{
        printf("\n wrong input\n");
    }
}