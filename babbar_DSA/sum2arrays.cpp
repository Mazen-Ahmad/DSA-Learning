#include<iostream>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int arr[n],arr2[m],sum[m+n-1];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<m;i++)
    {
        cin>>arr2[i];
    }
    int c=0;
    for(int i=n-1,j=m-1,k=m+n-2;i>=0 && j>=0;i--,j--,k--)
    {
        if(arr[i]+arr2[j]>9)
        {
        sum[k]=((arr[i]+arr2[j])%10)+c;
        c=1;
        }
        else
        {
        sum[k]=(arr[i]+arr2[j])+c;
        c=0;
        }
    }
    for(int i=0;i<m+n;i++)
    {
        cout<<sum[i];
    }
}

