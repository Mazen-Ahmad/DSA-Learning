#include<stdio.h>
int main()
{
    int n,t,f=1,sm=0,p;
    printf("enter a number");
    scanf("%d",&n);
    p=n;
    while(n!=0)
    {
        t=n%10;
        while(t>0)
        {
            f=f*t;
            t--;
        }
        sm=sm+f;
        n=n/10;
        f=1;
    }
    if(sm==p)
    printf("STRONG NO.");
    else
    printf("NOT STRONG NO.");
    return 0;
}