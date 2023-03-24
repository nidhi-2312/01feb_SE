#include<string.h>
#include<stdio.h>
void main()
{
    char fnm[20], lnm[20];
    printf("Enter your\nfirst name:");
    scanf("%s",&fnm);
    printf("last name:");
    scanf("%s",&lnm);
    strcat(fnm, lnm);
    printf("\nYour full name is:%s", fnm);
}