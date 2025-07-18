#include<iostream>
using namespace std;
int main()
{
    int m,n;
    cin>>n>>m;
    int arr1[n],arr2[m],arr3[m+n];
    for(int i=0;i<n;i++)
    {
        cin>>arr1[i];
    }
    for(int i=0;i<m;i++)
    {
        cin>>arr2[i];
    }
    int k=0,l=0;
    for(int i=0;i<m+n;i++)
    {
        if(arr1[k]<arr2[l])
        {
            arr3[i]=arr1[k];
            k++;
        }
        else if(arr1[k]>arr2[l])
        {
           arr3[i]=arr2[l];
           l++; 
        }
    }
    for(int i=0;i<m+n;i++)
    {
        cout<<arr3[i];
    }
}