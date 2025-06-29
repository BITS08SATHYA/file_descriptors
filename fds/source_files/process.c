//
// Created by sathipa on 29/6/25.
//
#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>

void main(void){
//    printf("\n Hello: Program executes in memory as a process\n");
//    sleep(5);
//    printf("\n The process is terminated from memory, and the process no longer exists \n");

    printf("\nProcess Id is (%d)\n ", getpid());
    printf("\n Process Id of creator(parent) is (%d) \n", getppid());

    sleep(5);
}