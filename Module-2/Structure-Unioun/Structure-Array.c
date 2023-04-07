#include<stdio.h>
struct Stdata
{
    int id;
    char nm[20];
};

int main()
{
    struct Stdata obj[20];
    int i;
    for (i = 0; i < 3; i++)
    {
        printf("Enter your id:");
        scanf("%d", &obj[i].id);
        printf("Enter your name:");
        scanf("%s", &obj[i].nm);
    }
    for (i = 0; i < 3; i++)
    {
        printf("\n%s your id is:%d", obj[i].nm, obj[i].id);
    }
    
    return 0;
}