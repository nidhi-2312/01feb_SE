#include<stdio.h>
void main()
{
    int a = 10;
    int *ptr;
    ptr = &a;
    printf("\nAddress of a is:%d", ptr);
    // ptr++;
    // printf("\nAfter increment address is:%d", ptr);
    *ptr = 100;
    ++*ptr;
    printf("\nValue of a is:%d", a);
}