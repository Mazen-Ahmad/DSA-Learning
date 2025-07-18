#include<stdio.h>
void fib(int n);
int a=0,temp;
int b=1;
void main()
{
    int n;
    printf("enter no. of elements of fibonaci series u want\n");
    scanf("%d",&n);
    if(n==1)
    printf("0");
    else if(n==2)
    printf("0,1");
    else
    {
    printf("0,1");
    fib(n);
    }
}
void fib(int n)
{
    if(n>2)
    {
    printf(",%d",a+b);
    temp=b;
    b=a+b;
    a=temp;
    fib(n-1);
}
}