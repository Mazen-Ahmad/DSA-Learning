#include<stdio.h>
void dowork(int a,int b);

int main()
{
    int c,d;
    printf("Enter 2 no.(s)");
    scanf("%d %d",&c,&d);
    dowork(c,d);
    return 0;
}

void dowork(int a,int b)
{
    int s=a+b;
    int p=a*b;
    float avg=(a+b)/2;
    printf("sum is: %d\n",s);
    printf("product is: %d\n",p);
    printf("average is: %f",avg);
}
