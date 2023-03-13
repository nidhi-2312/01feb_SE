#include<stdio.h>
int main()
{
    int a, b;
    int ch;
    printf("\n1.Add\n2.Sub\n3.Div\n4.Mul");
    printf("\nEnter your choice:");
    scanf("%d",&ch);
    printf("Enter the value of a and b:");
    scanf("%d%d", &a, &b);
    switch (ch)
    {
    case 1:
        printf("\nAdd is :%d", a+b);
        break;
    case 2:
        printf("\nSub is :%d", a-b);
        break;
    case 3:
        printf("\nDiv is :%d", a / b);
        break;
    case 4:
        printf("\nMul is :%d", a*b);
        break;
    default:
        printf("\nInvalid choice.........");
        break;
    }
}