#include <stdio.h>
int main() 
{
int n, remainder;
int product = 1; 
scanf("%d", &n);
while (n != 0) 
{
remainder = n % 10;
if (remainder % 2 != 0) 
{
product = product * remainder;
}
n = n / 10;
}
printf("%d\n", product);
return 0;
}
