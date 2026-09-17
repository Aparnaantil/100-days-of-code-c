/*
* Name: Aparna
* Day: 01 Question: 1
* PROBLEM STATEMENT:
* Q1: Write a program to input two numbers and display their sum.
*/
#include <stdio.h>
int main() 
{
    int num1, num2, sum;
    if (scanf("%d %d", &num1, &num2) == 2) 
{
        sum = num1 + num2;
        printf("Sum = %d\n", sum);
    }

    return 0;
}

