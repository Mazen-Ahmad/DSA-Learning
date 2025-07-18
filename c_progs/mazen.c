#include<stdio.h>
int main()
{
    int n,i=1,c=0;
    printf("enter a number");
    scanf("%d",&n);
    if(n==1)
    {
    printf("prime no.");
    }
    else
    {
    do
    {
        if(n%i==0)
        c++;
        i++;
    }
    while(i<=n);
    if(c==2)
    printf("prime no.");
    else
    printf("not prime no.");
    return 0;
}
}