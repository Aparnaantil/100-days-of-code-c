#include <stdio.h>
int main() 
{
    int n, i;
    int sum = 0;
    int current_odd = 1;
    printf("Enter n: ");
    if (scanf("%d", &n) != 1) 
{
        printf("Invalid input.\n");
        return 1;
}
   for (i = 1; i <= n; i++) 
{
        sum += current_odd;
        current_odd += 2;
}
    printf("%d\n", sum);
return 0;
}

