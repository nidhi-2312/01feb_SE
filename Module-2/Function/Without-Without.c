#include<stdio.h>
int no;
void getdata()
{
    printf("Enter the value of no:");
    scanf("%d", &no);
}
void showdata()
{
    printf("Value of no is:%d", no);
}
void main()
{
    getdata();
    showdata();
}