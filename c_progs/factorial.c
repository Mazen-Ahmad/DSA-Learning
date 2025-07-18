#include<stdio.h>
int main()
{
    int n,i,r=1;
    printf("Enter a no.");
    scanf("%d",&n);
    for(i=n;i>0;i--)
    {
     r=r*i;
    }
    printf("FACTORIAL IS: %d",r);
}