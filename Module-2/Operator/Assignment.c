// +=, -=, *=, /=, %=
#include<stdio.h>
void main()
{
    int a , b;
    int ans;
    printf("Enter the value of a and b:");
    scanf("%d%d",&a, &b);
    a %= b;
    printf("\nAnswer is:%d",a);
}