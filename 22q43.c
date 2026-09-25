#include <stdio.h>
int main() 
{
int num, originalNum, remainder, sum = 0;
scanf("%d", &num);
originalNum = num;
while (num != 0) 
{
remainder = num % 10;
int fact = 1;
for (int i = 1; i <= remainder; i++) 
{
fact = fact * i;
}
sum = sum + fact;
num = num / 10;
}
if (sum == originalNum) 
{
printf("Strong number\n");
} 
else 
{
printf("Not strong number\n");
}
return 0;
}

