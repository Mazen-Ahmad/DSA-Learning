#include<stdio.h>

void ptrn(int n);

void main()
{
    int n=3;
    ptrn(n);
}

void ptrn(int n)
{
    
        for(int i=1;i<=n;i++)
        {
            for(int z=1;z<=((2*i)-1);z++)
            {
                printf("* ");
            }
            printf("\n");
                   
        }
        
    }
