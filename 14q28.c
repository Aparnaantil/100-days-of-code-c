#include <stdio.h>
int main() 
{
    int n, i;
    long long product = 1;
    int has_even = 0;
    printf("Enter n: ");
    if (scanf("%d", &n) != 1)
{
        printf("Invalid input.\n");
        return 1;
}
    for (i = 1; i <= n; i++) 
{
        if (i % 2 == 0) 
{
            product *= i;
            has_even = 1;
}
}
    if (has_even) 
{
        printf("%lld\n", product);
} 
else {
        printf("0\n");
}
return 0;
}
