#include<stdio.h>
void data(int no)
{
    printf("Value of no is:%d", no);
}

void main()
{
    int n;
    printf("Enter the value of n:");
    scanf("%d", &n);
    data(n);
}