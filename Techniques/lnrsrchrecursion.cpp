#include<iostream>
using namespace std;
void lnr(int *arr,int n,int k)
{
    if(n<=0)
    {
        cout<<"element not found";
        return ;
    }
    if(arr[0]==k)
    {
        cout<<"element found";
        return ;
    }
    lnr(arr+1,n-1,k);
}
int main()
{
    int n,k;
    cout<<"enter size of array";
    cin>>n;
    int *arr=new int[n];
    cout<<"enter the array";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"enter key element";
    cin>>k;
    lnr(arr,n,k);
}