#include <stdio.h>
int main() 
{
    double radius;
    if (scanf("%lf", &radius) == 1) 
{
        const double PI = 3.141592653589793;
        double area = PI * radius * radius;
        double circumference = 2 * PI * radius;
        printf("Area=%.2f, Circumference=%.2f\n", area, circumference);
    }
    return 0;
}
