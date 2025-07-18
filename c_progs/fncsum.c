#include<stdio.h>
int sum(int a,int b);


int main()
{
    int a,b,r;
    printf("Enter the numbs");
    scanf("%d",&a);
    scanf("%d",&b);
    printf("sum of the numbers is: %d",sum(a,b));
          
}


int sum(int a,int b)
{
 int sm=a+b;
 return sm;
}
