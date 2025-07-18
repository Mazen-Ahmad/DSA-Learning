#include<stdio.h>
int main()
{
    int arr[]={5,3,8,6,7};
    int *ptr=arr;
    int *ttr=&arr[0];
    printf(" %p   ,    %p",ptr,ttr);
    return 0;
}