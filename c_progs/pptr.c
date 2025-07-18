#include<stdio.h>
int main()
{
    int i,*ptr,**potty;
    printf("enter the no.");
    scanf("%d",&i);
    ptr=&i;
    potty=&ptr;
    printf("%d",**potty);
    return 0;
}