#include<stdio.h>
int main()
{
    int i,n;
    for(i=2;;i++)
    {
     printf("enter a no.\n");
     scanf("%d",&n);
     if((n%7)==0)
     break;
    }
    printf("INPUT IS MULTIPLE OF 7, PROGRAM BREAK");
    return 0;
}