#include<stdio.h>
void main()
{
    char ch2='a';
    char ch=ch2-1;
    int n;
    printf("enter number of rows");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int z=i;z<=n;z++)
        {
            printf(" ");
        }
        for(int k=1;k<=i;k++)
        {
            ch=ch+1;
            printf("%c ",ch);
        }  
        printf("\n");  
    }
}