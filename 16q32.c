#include <stdio.h>
int main() 
{
    int originalNumber, remainder;
    long long reversedNumber = 0;
    if (scanf("%d", &originalNumber) != 1) 
{
        printf("Invalid input.\n");
        return 1;
}
    if (originalNumber < 0) 
{
        printf("Not palindrome\n");
        return 0;
}
int temporaryNumber = originalNumber;
    while (temporaryNumber > 0) 
{
        remainder = temporaryNumber % 10;
        reversedNumber = reversedNumber * 10 + remainder;
        temporaryNumber = temporaryNumber / 10;
}
    if (originalNumber == reversedNumber) 
{
        printf("Palindrome\n");
} 
else {
        printf("Not palindrome\n");
}
return 0;
}
