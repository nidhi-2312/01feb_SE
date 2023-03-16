#include<stdio.h>
void main()
{
    int i, j;
    for (i = 5; i > 0; i--) //For Row
    {
        for (j = 0; j < i; j++) //For Column
        {
            printf("%d ", j);
        }
        printf("\n");
    }
}

/*
     1
    1 2
   1 2 3
  1 2 3 4
 1 2 3 4 5




*/