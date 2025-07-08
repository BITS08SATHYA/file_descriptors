//
// Created by sathipa on 8/7/25.
//
#include<stdio.h>
#include<stdlib.h>
#include<sys/types.h>
#include<unistd.h>

int main(){
    pid_t id;
    printf("Parent Process: Executed by parent process before fork() - PID = (%d)\n", getpid());

    id = fork();

    if(id < 0){
        printf("\n fork failed\n");
        exit(-1);
    }

    if(id > 0){
        printf("\nParent process: I have created chid process with Id = (%d)\n", id);
    }else{
        printf("\nI am child process, id value is (%d)\n", id);
        printf("\nChild process id is (%d)\n", getpid());
        printf("\nThe creator of child process is (%d)\n", getppid());
    }

    return 0;

}