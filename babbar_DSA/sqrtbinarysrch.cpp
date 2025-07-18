#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        arr[i]=i+1;
    }
    int max=n,min=0,ans=1,c=0;                                                                                                                                                                                                                                                                     ;
    while(max>min+1)
    {
        int ind=min+(max-min)/2;
        if(arr[ind]*arr[ind]==n)
        {
            ans=arr[ind];
            c++;
            cout<<"sqrt is: "<<ans;
            break;
        }         
        if(arr[ind]*arr[ind]<n)   
        {
            ans=arr[ind];
            min=ind;
        }           
        if(arr[ind]*arr[ind]>n)    
        max=ind;
    }
    cout<<"sqrt is: "<<ans;
    return 0;
}