#include <stdio.h>
int main() 
{
int n;
float sum = 0.0;
float numerator = 1.0;
float denominator = 1.0;
scanf("%d", &n);
for (int i = 1; i <= n; i++) 
{
if (i == 1) 
{
sum = sum + (numerator / denominator);
} 
else 
{
numerator = numerator + 2.0;
denominator = denominator + 2.0;
sum = sum + (numerator / denominator);
}
}
printf("Approximate sum: %.1f\n", sum);
return 0;
}
