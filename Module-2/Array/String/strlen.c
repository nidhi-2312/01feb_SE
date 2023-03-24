#include<stdio.h>
#include<string.h>
void main()
{
    char str[20];
    int len;
    printf("\nEnter your string:");  
    scanf("%s",&str);
    len = strlen(str);
    printf("\nLength of the your string is:%d", len);
}