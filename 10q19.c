#include <stdio.h>
int main() 
{
    double side1, side2, side3;
    printf("Enter three sides of the triangle: ");
    if (scanf("%lf %lf %lf", &side1, &side2, &side3) != 3) 
{
        printf("Invalid input.\n");
        return 1;
}
    if ((side1 + side2 <= side3) || (side1 + side3 <= side2) || (side2 + side3 <= side1) || 
        side1 <= 0 || side2 <= 0 || side3 <= 0) 
{
        printf("Not a valid triangle\n");
        return 0;
}
    if (side1 == side2 && side2 == side3) 
{
        printf("Equilateral\n");
} 
    else if (side1 == side2 || side2 == side3 || side1 == side3) 
{
        printf("Isosceles\n");
} 
    else {
        printf("Scalene\n");
}

    return 0;
}
