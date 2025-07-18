#include<stdio.h>
#include<math.h>
void main()
{
    int n,r,t,p=0,f=0;
    scanf("%d",&n);
    for(r=n;r>1;r=r/2)
    {
        p++;
    }
    for(;p>=0;p--)
    {
        t=n/(pow(2,p));
        if(t%2==0)
        f= (f*10)+0;
        else 
        f= (f*10)+1;
    }
    printf("%d",f);
}