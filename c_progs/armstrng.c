#include<stdio.h>
int main()
{
    int n,i=0,p,r;
    printf("enter a no.");
    scanf("%d",&n);
    p=n;
    while(n>0)
    {
     r=n%10;
     i=i+(r*r*r);
     n=n/10;
    }
    if(p==i)
    printf("ARMSTRONG NUMB");
    else
    printf("NOT ARMSTRONG");
    return 0;
} 