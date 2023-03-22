#include<stdio.h>
int main()
{
    int i;
    int flag = 0, no;
    printf("Enter the no to check whether the no is prime or not:");
    scanf("%d", &no);
    for( i = 2; i < no; i++)
    {
        if (no % i == 0)
        {
            flag = 1;
            goto prime;        
        }
    }
    prime:
        if(flag == 0)
            printf("\n%d is is prime no.", no);
        else
            printf("\n%d is not prime.",no);
    
    return 0;
}
