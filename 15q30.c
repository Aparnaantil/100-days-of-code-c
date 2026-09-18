#include <stdio.h>
int main() 
{
    int n, remainder;
    int reversed_num = 0;
    printf("Enter an integer: ");
    if (scanf("%d", &n) != 1) 
{
        printf("Invalid input.\n");
        return 1;
}
    while (n != 0) 
{
        remainder = n % 10;
        reversed_num = reversed_num * 10 + remainder; 
        n /= 10;
}
    printf("%d\n", reversed_num);
    return 0;
}
