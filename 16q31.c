#include <stdio.h>
int main() 
{
    int number;
    int binaryArray[32];
    int i = 0;
    if (scanf("%d", &number) != 1) 
{
        printf("Invalid input.\n");
        return 1;
}
    if (number == 0) 
{
        printf("0\n");
        return 0;
}
    if (number < 0) 
{
        printf("Please enter a non-negative integer.\n");
        return 1;
}
    while (number > 0) 
{
        binaryArray[i] = number % 2;
        number = number / 2;
        i++;
}
    for (int j = i - 1; j >= 0; j--) 
{
        printf("%d", binaryArray[j]);
}
    printf("\n");

    return 0;
}
