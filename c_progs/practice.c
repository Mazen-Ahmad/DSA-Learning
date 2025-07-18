#include<stdio.h>
int main()
{
    int n,dv=0;
    scanf("%d",&n);
    for(;;)
    {
     for(;n>0;)
     {
     dv=dv+(n%10);
     n=n/10;
    }
    if(dv>=0 && dv<=9)
    {
    printf("digital value is %d",dv);
    break;
    }
    else
    {
    n=dv;
    dv=0;
    }
    }
    return 0;
}