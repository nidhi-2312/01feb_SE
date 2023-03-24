#include<stdio.h>
#include<string.h>
void main()
{
    char str[20];
    printf("Enter the string:");
    scanf("%s",&str);
    strrev(str);
    printf("\nYour reverse string is:%s", str);
}