#include<stdio.h>
void swap(int *n,int *m);
void main()
{
    printf("enter the no.s\n");
    int n,m;
    scanf("%d  %d",&n,&m);
    printf("no.s before: %d,%d\n",n,m);
    swap(&n,&m);
    printf("no.s after: %d,%d",n,m);
}
void swap(int *n,int *m)
{
    *n= *n  *  *m;
    *m= *n  /  *m;
    *n= *n  /  *m;
}