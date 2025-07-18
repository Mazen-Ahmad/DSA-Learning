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
    int min=0,max=n;
    while(min<max)
    {
        int ind=min+(max-min)/2;
        if(arr[ind]>arr[ind+1] && arr[ind]>arr[ind-1])
        {
         int ans=ind;
         cout<<"answer is: "<<arr[ind]<<endl<<"at index: "<<ind;
         break;
        }
        else if(arr[ind]<arr[ind+1] && arr[ind]>arr[ind-1])
        {
            min=ind;
        }
        else if(arr[ind]>arr[ind+1] && arr[ind]<arr[ind-1])
        {
            max=ind;
        }
    }
    return 0;
}