// &, |, !, <<, >>, ~, ^
#include<stdio.h>
void main()
{
    int a , b;
    printf("Enter the value of a and b:");
    scanf("%d%d", &a, &b);
    printf("\nBitwise And is:%d", a&b);
    printf("\nBitwise Or is:%d", a|b);
    printf("\nBitwise not is:%d", !(a|b));
    printf("\nBitwise shift left:%d", a<<1);
    printf("\nBitwise shift right:%d", a>>1);
    printf("\nBitwise compliment is:%d", ~a);
    printf("\nBitwise XOR(exclusive or) is:%d", a ^ b);
}
