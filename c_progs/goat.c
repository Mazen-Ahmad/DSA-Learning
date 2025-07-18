#include<stdio.h>
int main()
{
    int n1,n2,n3,n4,grt1,grt2;
    printf("enter the numbers");
    scanf("%d",&n1);
    scanf("%d",&n2);
    scanf("%d",&n3);
    scanf("%d",&n4);
    if(n1>n2)
        grt1=n1;
        else if(n2>n1)
        grt1=n2;
        if(n3>n4)
        grt2=n3;
        else if(n4>n3)
        grt2=n4;
        if(grt1>grt2)
        printf("%d is greatest",grt1);
        else if(grt2>grt1)
        printf("%d is greatest",grt2);
        return 0;
}
    
