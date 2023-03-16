#include<stdio.h>
void main()
{
    int a, b, c ;
    printf("\nEnter the value\nA:");
    scanf("%d",&a);
    printf("B:");
    scanf("%d",&b);
    printf("C:");
    scanf("%d", &c);
    if (a > b)
    {
        if (a > c)
        {
            printf("\n%d is max no.",a);
        }
        else
            printf("\n%d is max no.",c);
    }
    else
    {
        if (b > c)
        {
            printf("\n%d is max no.",b);
        }
        else
            printf("\n%d 1 is max no.", c);
    }
}
/*
    a=
    b=15
    c=20
*/