/*
* Name:Aparna
* Day: 02 Question: 1
* PROBLEM STATEMENT:
* Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.
*/
#include <stdio.h>

int main(void) {
    int length, breadth;
    int area, perimeter;
    if (scanf("%d %d", &length, &breadth) == 2) 

{        area = length * breadth;
        perimeter = 2 * (length + breadth);
        printf("Area=%d, Perimeter=%d\n", area, perimeter);
    }

    return 0;
}
