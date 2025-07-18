#include<stdio.h>
void cntodd(int arr[],int n);
void main()
{
     int n;
     printf("enter size");
     scanf("%d",&n);
     int ar[n];
     printf("enter array elements");
     for(int z=0;z<n;z++)
     {
        scanf("%d",&ar[z]);
     }
     cntodd(ar,n);
     return 0;
}
void cntodd(int arr[],int n)
{
     int c=0;
     for(int i=0;i<n;i++)
     {
      if((arr[i]%2)!=0)
      c=c+1;
     }
     printf("count of odd numbers is: %d",c);
}

