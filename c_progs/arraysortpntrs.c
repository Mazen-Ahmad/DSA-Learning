#include<stdio.h>
void sort(int n,int *arr);
void main()
{
    printf("enter size of the array\n");
    int n;
    scanf("%d",&n);
    printf("enter the array\n");
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        printf("%d",arr[i]);
    }
    printf("\n");
    sort( n , arr);
    for(int i=0;i<n;i++)
    {
        printf("%d",arr[i]);
    }
}
void sort(int n,int *arr)
{
    int tem;
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            if(arr[j]<arr[i])
            {
                tem=arr[i];
                arr[i]=arr[j];
                arr[j]=tem;
            }
        }
    }
}