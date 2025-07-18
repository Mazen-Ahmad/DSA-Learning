#include<stdio.h>
int main()
{
    int n,i;
    printf("enter the no.");
    scanf("%d",&n);
    for (i=1;i<=10;i++)
    {
        printf("%d\n",(n*i));
    }
    return 0;
}