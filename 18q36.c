#include <stdio.h>
int main() 
{
int num1, num2, hcf = 1;
scanf("%d %d", &num1, &num2);
int min = num1;
if (num2 < num1) 
{
min = num2;
}
for (int i = 1; i <= min; i++) 
{
if (num1 % i == 0 && num2 % i == 0) 
{
hcf = i; 
}
}
printf("%d\n", hcf);
return 0;
}

