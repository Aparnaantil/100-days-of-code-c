#include <stdio.h>
int main() 
{
    int n, i;
    unsigned long long factorial = 1;
    printf("Enter a number: ");
    if (scanf("%d", &n) != 1) 
{
        printf("Invalid input.\n");
        return 1;
}
    if (n < 0) 
{
        printf("Factorial of a negative number doesn't exist.\n");
        return 1;
}
    for (i = 1; i <= n; i++) 
{
        factorial *= i;
}
    printf("%llu\n", factorial);
    return 0;
}
