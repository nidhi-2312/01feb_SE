// WAP to program demonstrate value swapping using third variable.
#include<stdio.h>
int main()
{
    int a, b;
    int temp;

    // pass the message to user for enter the value
    printf("Enter the value of a:");
    scanf("%d", &a);
    printf("Enter the value of b:");
    scanf("%d",&b);

    // Swap the value
    temp = a;
    a = b;
    b = temp;
    /*
        it's work like:
        a = 10; b= 100;
        temp = a -> temp = 10;
        a = b -> a = 100;
        b = temp -> b = 10;
    */

   printf("\nAfter swapping your value of a is:%d and value of b is:%d", a, b);
} 