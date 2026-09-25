#include <stdio.h>
int main() 
{
int num, originalNum, rem, sum = 0, digits = 0;
scanf("%d", &num);
originalNum = num;
int temp1 = num;
while (temp1 != 0) 
{
temp1 = temp1 / 10;
digits++;
}
int temp2 = num;
while (temp2 != 0)
{
rem = temp2 % 10;
int power = 1;
for (int i = 0; i < digits; i++)
{
power = power * rem;
}
sum = sum + power;
temp2 = temp2 / 10;
}
if (sum == originalNum) 
{
printf("Armstrong\n");
} 
else 
{
printf("Not Armstrong\n");
}
return 0;
}

