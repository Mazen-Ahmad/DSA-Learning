#include<stdio.h>
int main()
{
    int n,i,r;
    printf("enter a no. :");
    scanf("%d",&n);
    for(i=10;i>=1;i--)
    {
     r=n*i;
     printf("%d\n",r);
    }
}