#include<stdio.h>
#include<string.h>
void main()
{
    char str1[20], str2[20];
    printf("Enter the 1st string:");
    scanf("%s", &str1);
    strcpy(str2, str1);

    printf("\nYour 2nd string is:%s", str2);
}