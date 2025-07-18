#include<iostream>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int max=n-1,min=0,p=0;
    while(max>min)
    {
        int ind=min+(max-min)/2;
        if(arr[ind]==k )
        {
            cout<<"element found at index: "<<ind;
            break;
        }
        if(arr[ind]>k && arr[ind]<arr[n-1])
            max=ind;
        else if(arr[ind]>k && arr[ind]>arr[n-1])
            min=ind;
        if(arr[ind]<k && arr[ind]>arr[n-1])
        min=ind;
        else if(arr[ind]<k && arr[ind]<arr[n-1])
        max=ind;
    }
    return 0;
}