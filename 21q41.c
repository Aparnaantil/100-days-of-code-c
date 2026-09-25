#include <stdio.h>
int main() 
{
char num[50];
scanf("%s", num);
int len = 0;
while (num[len] != '\0') 
{
len++;
}
if (len > 1) 
{
char temp = num[0];
num[0] = num[len - 1];
num[len - 1] = temp;
}
printf("%s\n", num);
return 0;
}



