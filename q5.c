#include <stdio.h>
int main() 
{
    double celsius;
    if (scanf("%lf", &celsius) == 1) 
{
        double fahrenheit = (celsius * 9.0 / 5.0) + 32.0;
        printf("Fahrenheit=%.0f\n", fahrenheit);
    }
    return 0;
}

