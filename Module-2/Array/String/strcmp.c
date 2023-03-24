#include<stdio.h>
#include<string.h>
void main()
{
    char str1[20], str2[20];
    int cmp;
    printf("Enter \nthe string1:");
    scanf("%s", &str1);
    printf("The String 2:");
    scanf("%s", &str2);
    cmp = strcmp(str1, str2);
    printf("\nMax string is:%d", cmp);
    if (cmp > 0)
    {
        printf("1st string max.");
    }
    else if(cmp == 0)
    {
        printf("\nBoth are equle.");
    }
    else
    {
        printf("\n2nd is max.");
    }
}