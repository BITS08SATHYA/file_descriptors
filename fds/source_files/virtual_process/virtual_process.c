//
// Created by sathipa on 6/7/25.
//
#include <stdio.h>
#include <string.h>

void main(int argc, char* argv[]){
    int count = 0;
    printf("\n Demonstrate the command line arguments");
    printf("\n the value of argc is (%d) ", argc);

    while(count < argc){
        printf("\n (%d) the string is (%s) ", count , argv[count]);
        count++;
    }
}