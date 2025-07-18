#include<stdio.h>
void main()
{
    printf("enter size of both arrays");
    int n1,n2,i;
    scanf("%d %d",&n1,&n2);
    int arr1[n1],arr2[n2];
    printf("enter both arrays 1 by 1");
    for(i=0;i<n1;i++)
    {
        scanf("%d",&arr1[i]);
    }
    for(i=0;i<n2;i++)
    {
        scanf("%d",&arr2[i]);
    }
    int arr[n1+n2];
    for(i=0;i<n1;i++)
    {
        arr[i]=arr1[i];
        
    }
    for(i=n1;i<n1+n2;i++)
    {
        arr[i]=arr2[i-n1];
    }
    printf("merged array is:");
    for(i=0;i<n1+n2;i++)
    {
    printf("%d,",arr[i]);
} 
}