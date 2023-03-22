#include<stdio.h>
void main()
{
    int array[5][5];
    int i, j;
    for ( i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            printf("\nEnter value of array[%d]:",i);
            scanf("%d",&array[i][j]);
        }
        
    }
    for ( i = 0; i < 5; i++)
    {
        for(j = 0; j < 5; j++)
        {
            printf("\narray[%d][%d]:%d", i, j, array[i][j]);
        }
        printf("\n");
    }
}
/*
1 2 3
4 5 6 
7 8 9
*/