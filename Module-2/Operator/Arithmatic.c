/*
    +, -, *, /, %, ++, --
*/
#include<stdio.h>
void main()
{
    int a, b;
    char n= 'v', k= 'h';
    int ans;
    float div;
    printf("Enter the value of 2 no:");
    scanf("%d%d",&a, &b);
    printf("\nAddition of a and b is:%d", n+k);
    ans = a-b;
    printf("\nSubtraction of a and b is:%d", ans);
    ans = a * b;
    printf("\nMultiplication of a and  b is:%d", ans);

    div = (float)a / (float)b;
    printf("\nDivision of a and b is:%f", div);
    ans = a % b;
    printf("\nModulo is:%d", ans);
    a++;
    printf("\nAfter increment value of a is:%d", a);
    --b;
    printf("\nAfter decrement value of b is:%d", b);

}