#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void merge(int arr[],int s,int e)
{
    sort(arr+s,arr+e+1);
}
void brk(int arr[],int s,int e)
{
    if(s>=e)
    {
        return ;
    }
    int mid=(s+e)/2;
    brk(arr,s,mid);
    brk(arr,mid+1,e);
    
    merge(arr,s,e);
}
int main()
{
    int n;
    cout<<"enter size of arr: ";
    cin>>n;
    int *arr=new int(n);
    cout<<"enter arr: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    brk(arr,0,n-1);
    cout<<"array is: ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }
}