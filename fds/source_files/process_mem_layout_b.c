//
// Created by sathipa on 29/6/25.
//
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int add_num(int num1, int num2);
int g_var =20;
int g_flag;

void main(void){
    int num1, num2, sum;
    char *pstr;
    char *buf = "welcome";
    char stack_buf[20] = {"stackData"};

    //buf[0] = 'n';
    strcpy(stack_buf, "newString");

    num1 = 10;
    num2 = 20;
    sum = add_num(num1 , num2);
    printf("\n the result of add is (%d)\n ", sum);

    num1 = 100;
    num2 = 200;
    sum = add_num(num1 , num2);
    printf("\n the result of add is (%d)\n ", sum);

    pstr = malloc(20);
    strcpy(pstr, "Hello");
    printf("\n String stored is (%s)\n", pstr);

}

int add_num(int num1, int num2){
    int res = 0;
    static int count = 0;

    count += 1;
    res  = num1 + num2;

    printf("\n Number of times the function add_num called is (%d)\n", count);
    return res;
}