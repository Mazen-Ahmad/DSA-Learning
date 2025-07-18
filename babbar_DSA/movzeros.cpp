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
    int j=0; //j tracks position of 0, i traverses array
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=0)
        {
            int tem=arr[j];
            arr[j]=arr[i];
            arr[i]=tem;
            j++;
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i];
    }
}