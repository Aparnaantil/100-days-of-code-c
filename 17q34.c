#include <stdio.h>
int main() 
{
int n, count = 0;
scanf("%d", &n);
if (n < 2) 
{
printf("Not prime\n");
} 
else 
{
for (int i = 2; i < n; i++) 
{
if (n % i == 0) 
{
count++;
}
}
if (count == 0) 
{
printf("Prime\n");
} 
else 
{
printf("Not prime\n");
}
}
return 0;
}

