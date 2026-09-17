/*
* Name:Aparna
* Day: 01 Question 2
* PROBLEM STATEMENT:
* Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.
*/
#include <stdio.h>

int main()
 {
    int num1, num2;
    int sum, diff, prod, quot;
    if (scanf("%d %d", &num1, &num2) == 2) {
        sum = num1 + num2;
        diff = num1 - num2;
        prod = num1 * num2;
        if (num2 != 0) {
            quot = num1 / num2; 
            printf("Sum=%d, Diff=%d, Product=%d, Quotient=%d\n", sum, diff, prod, quot);
        } 
else {
            printf("Error: Division by zero.\n");
        }
    }

    return 0;
}

