#include<stdio.h>
int main()
{
    int n;
    printf("enter no. of elements");
    scanf("%d",&n);
    int a[n],t;
    printf("enter the no.s");
    for(int p=0;p<n;p++)
    {
        scanf("%d",&a[p]);
    }
    for(int i=0;i<n;i++)
    {
     for(int z=i;z<n;z++)
     {
      if(a[z]>a[i])
      {
        t=a[i];
        a[i]=a[z];
        a[z]=t;
      }
     }
    }
    for(int pnt=0;pnt<n;pnt++)
    {
        printf("%d",a[pnt]);
    }
return 0;
}