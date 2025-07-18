#include<stdio.h>
void main()
{
    printf("enter the no.");
    int n,i;
    scanf("%d",&n);
    for(i=31;i>=0;i--)
    {
        if(n&(1<<i))
        printf("1");
        else
        printf("0");
    }
}