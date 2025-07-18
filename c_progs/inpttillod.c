#include<stdio.h>
int main()
{
    int i,n;
    for(i=2;;i++)
    {
     printf("enter a no.\n");
     scanf("%d",&n);
     if((n%2)!=0)
     break;
    }
    printf("INPUT IS ODD, PROGRAM BREAK");
    return 0;
}