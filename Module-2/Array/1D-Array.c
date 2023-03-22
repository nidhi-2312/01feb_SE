#include<stdio.h>
void main()
{
    /*
    int array[5] = {1,2,3,4,5};
    printf("Value of 2nd index is:%d",array[2]);
    */
    int array[5];
    int i;
    for ( i = 0; i < 5; i++)
    {
        printf("\nEnter value of array[%d]:",i);
        scanf("%d",&array[i]);
    }
    for ( i = 0; i < 5; i++)
    {
        printf("\narray[%d]:%d",i, array[i]);
    }
}