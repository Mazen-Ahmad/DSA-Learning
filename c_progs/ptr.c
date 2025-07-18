#include<stdio.h>
int main()
{
    int x,t;
    scanf("%d",&x);
    int *ptr = &x;
    t = *ptr;
    printf("%p",t);//use %p for address but u can use %u(unsigned int) for storing more easily.
    return 0;
}