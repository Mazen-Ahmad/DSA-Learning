#include<iostream>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int arr[n],str[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        if((i+k)<n)
        {
           str[i+k]=arr[i];
        }
        else
        {
           str[0+(k-(n-i))]=arr[i];
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<str[i]<<endl;
    }
}