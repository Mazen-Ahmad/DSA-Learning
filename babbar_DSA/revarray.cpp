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
    for(int i=0;;i++)
    {
        if(i<n-i-1)
        {
            int tem=arr[i];
            arr[i]=arr[n-i-1];
            arr[n-i-1]=tem;
        }
        else
        break;
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i];
    }
}