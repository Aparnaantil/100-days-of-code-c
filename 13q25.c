#include <stdio.h>
int main() 
{
    int num1, num2;
    char op;
    printf("Enter two numbers and an operator (e.g., 4 2 +): ");
    if (scanf("%d %d %c", &num1, &num2, &op) != 3) 
{
        printf("Invalid input.\n");
        return 1;
}
    switch (op) 
{
        case '+':
            printf("%d\n", num1 + num2);
            break;
        case '-':
            printf("%d\n", num1 - num2);
            break;
        case '*':
            printf("%d\n", num1 * num2);
            break;
        case '/':
            if (num2 == 0) 
{
                printf("Error: Division by zero is not allowed.\n");
            } 
else {
                printf("%d\n", num1 / num2);
}
            break;
        case '%':
            if (num2 == 0) 
{
                printf("Error: Modulo by zero is not allowed.\n");
} 
else {
                printf("%d\n", num1 % num2);
}
            break;
        default:
            printf("Error: Invalid operator.\n");
            break;
}

    return 0;
}
