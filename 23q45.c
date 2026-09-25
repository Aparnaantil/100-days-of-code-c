#include <stdio.h>
int main() 
{
int n;
float sum = 0.0;
float numerator = 2.0;
float denominator = 3.0;
scanf("%d", &n);
for (int i = 1; i <= n; i++) 
{
sum = sum + (numerator / denominator);
numerator = numerator + 2.0;
denominator = denominator + 4.0;
}
printf("Approximate sum: %.2f\n", sum);
return 0;
}
