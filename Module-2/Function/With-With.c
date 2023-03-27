#include<stdio.h>
int add(int a, int b)
{
    return a + b;
}
int main()
{
    int x, y;
    printf("Enter the value of x and y:");
    scanf("%d%d", &x, &y);
    printf("%d", add(x, y));
    return 0;
}