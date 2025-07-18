#include<stdio.h>
int main()
{
    int n,i,sm=0,t;
    printf("enter the number");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
     sm=sm+i;
    }
    printf("sum is: %d \n",sm);
    printf("backwards:");
    for(t=n;t>0;t--)
    {
        printf("%d",t);
    }
}