//
// Created by sathipa on 8/7/25.
//
#include<stdio.h>
#include<stdlib.h>

void main(void){
    int *pint = NULL;
    int count = 10;

    pint = (int *) malloc(10 * sizeof(int));

    if(pint == NULL){
        printf("\n malloc failed");
        exit(-1);
    }

    printf("\n malloc success");

    for(count=0;count < 10; count++){
        pint[count] = count;
    }

    for(count=0;count < 10; count++){
        printf("\npint[%d] = (%d)", count, pint[count]);
    }

    pint = (int *) realloc(pint, 15 * sizeof(int));

    if(pint == NULL){
        printf("\n realloc failed");
        exit(-1);
    }

    printf("\n After realloc");
    for(count=10;count < 15; count++){
        pint[count] = count;
    }

    for(count=0;count < 15; count++){
        printf("\npint[%d] = (%d)", count, pint[count]);
    }

    free(pint);
}

