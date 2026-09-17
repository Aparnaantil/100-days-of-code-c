#include <stdio.h>
#include <math.h> 
int main() 
{
    double principal, rate, time;
    double simple_interest, compound_interest, amount;
    if (scanf("%lf %lf %lf", &principal, &rate, &time) != 3) {
        return 1;
    }
    simple_interest = (principal * rate * time) / 100.0;
    amount = principal * pow((1 + rate / 100.0), time);
    compound_interest = amount - principal;
    printf("Simple Interest=%.5g, Compound Interest=%.2f\n", simple_interest, compound_interest);

    return 0;
}


