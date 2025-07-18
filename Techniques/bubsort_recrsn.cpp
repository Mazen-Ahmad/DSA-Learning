#include<iostream>
using namespace std;
int* bsrt(int arr[],int n,int i,int k)
{
    if(i>=n)
    {
        return arr;
    }
    if(k>=n)
    {
        return bsrt(arr,n,i+1,i+2);
    }
    if(arr[i]>arr[k])
    {
        swap(arr[i],arr[k]);
    }
    return bsrt(arr,n,i,k+1);
}
int main()
{
    int n;
    cout<<"enter array size: ";
    cin>>n;
    cout<<"enter the array";
    int *arr=new int(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int* ans=bsrt(arr,n,0,1);
    cout<<"sorted arr is: ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i];
    }
}