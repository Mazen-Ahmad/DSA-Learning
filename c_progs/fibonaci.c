#include<stdio.h>
int main()
{
    int a=0,b=1,f;
    printf("%d,%d",a,b);
    for(int i=1;i<=15;i++)
    {
        f=a+b;
        printf(",%d",f);
        a=b;
        b=f;
    }
    return 0;
}