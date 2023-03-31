// WAP To find factorial  using recursive function
#include<stdio.h>
// Recursive function
long double fecto(long double no)
{
    if (no < 1)
    {
        return 1;
    }
    // fecto() method call it self
    return  no * fecto(no-1);
    /*
        for ex. 5 * fecto(5 - 1);
    */
}
int main()
{
    long double n;
    printf("Enter the value of no:");
    scanf("%Lf", &n);
    printf("%Lf",fecto(n));
    return 0;
}