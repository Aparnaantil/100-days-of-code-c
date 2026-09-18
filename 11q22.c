#include <stdio.h>
int main() 
{
    double cp, sp, percentage;
    printf("Enter Cost Price and Selling Price: ");
    if (scanf("%lf %lf", &cp, &sp) != 2) 
{
        printf("Invalid input.\n");
        return 1;
}
    if (cp <= 0) 
{
        printf("Cost price must be greater than zero.\n");
        return 1;
}
    if (sp > cp) 
{
        percentage = ((sp - cp) / cp) * 100;
        printf("Profit %g%%\n", percentage);
} 
    else if (cp > sp) 
{
        percentage = ((cp - sp) / cp) * 100;
        printf("Loss %g%%\n", percentage);
} 
    else {
        printf("No Profit No Loss\n");
}

    return 0;
}
