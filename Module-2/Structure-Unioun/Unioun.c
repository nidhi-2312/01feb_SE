#include<stdio.h>
union Stdata
{
    int id;
    char nm[20];
}st;
int main()
{
    printf("Enter the value of id:");
    scanf("%d", & st.id);
    printf("Enter the value of name:");
    scanf("%s", &st.nm);
    printf("\n%s your id is:%d", st.nm, st.id);
    return 0;
}