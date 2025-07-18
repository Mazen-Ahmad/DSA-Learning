#include<stdio.h>
int main()
{
    int i;
    for(i=1;i<=5;i++)
    {
        for(int z=1;z<=15-i;z++)
        {
           printf(" ");
        }
        for(int k=1;k<=i;k++)   
        {
            printf("* ");
        }
        printf("\n");
    }
        for(int l=1;l<=i-2;l++)
        {
         for(int p=1;p<=10+l;p++)
         {
            printf(" ");
         }   
         for(int d=4;d>=l;d--)
        {
            printf("* ");
        }
        printf("\n");
        }
        return 0;
}