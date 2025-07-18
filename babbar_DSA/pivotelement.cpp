#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int max=n,min=0;
    while(max>min)
    {
        int ind=min+(max-min)/2;
        if((arr[ind]<arr[ind+1] && arr[ind]<arr[ind-1]) || (arr[ind]>arr[ind+1] && arr[ind]>arr[ind-1]) )
        {
            cout<<"pivot is: "<<ind;
            break;
        }
        if(arr[ind]<arr[n-1-ind])
        {
            min=ind;
        }
        if(arr[ind]>arr[n-1-ind])
        {
            max=ind;
        }
    }
    return 0;
}