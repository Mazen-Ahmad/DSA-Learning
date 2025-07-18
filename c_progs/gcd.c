#include<stdio.h>
int main()
{
    printf("enter the 2 numbers");
    int i,x,y,gcd;
    scanf("%d %d",&x,&y);
    for (i=1;i<=x&&i<=y;i++)
    {
        if(x%i==0&&y%i==0)
        {
            gcd=i;
        }
    }
    printf("greatest common divisor is: %d",gcd);
    return 0;
}
