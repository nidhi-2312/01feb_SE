// &&, ||, !
#include<stdio.h>
void main()
{
    int x , y;
    printf("Enter the value of \nx:");
    scanf("%d",&x);
    printf("Y:");
    scanf("%d",&y);
    if (!(x<10 || y>10))
    {
        printf("True");
    }
    else{
        printf("false");
    }
}