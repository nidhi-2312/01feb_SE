// <, >, <=, >=, ==, !=
#include<stdio.h>
void main()
{
    int a, b;
    printf("Enter the value of a and b:");
    scanf("%d%d",&a,&b);
    if (a != b)
    {
        printf("Both are not equal");
    }
    else
    {
        printf("Both are equal");
    }
}