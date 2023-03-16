#include<stdio.h>
int main()
{
    int a, b;
    char ch;
    printf("\n1.Add\n2.Sub\n3.Div\n4.Mul");
    // printf("\nEnter your choice:");
    // scanf("%c",&ch);
    printf("Enter the value of a and b:");
    scanf("%d%c%d", &a,&ch, &b);
    switch (ch)
    {
    case '+':
        printf("\nAdd is :%d", a+b);
        break;
    case '-':
        printf("\nSub is :%d", a-b);
        break;
    case '/':
        printf("\nDiv is :%d", a / b);
        break;
    case '*':
        printf("\nMul is :%d", a*b);
        break;
    default:
        printf("\nInvalid choice.........");
        break;
    }
}