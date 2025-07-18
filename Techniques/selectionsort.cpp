#include<iostream>
using namespace std;
int main()
{
    int n,k,min,c;
    cout<<"enter size of the array"<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter the array"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }  
    for(int i=0;i<n;i++)
    {
        c=0;
        min=arr[i];
        for(int j=i;j<n;j++)
        {
            if(arr[j]<min)
            {
                min=arr[j];
                k=j;
                c++;
            }
        }
        if(c!=0)
        {
        int tem=arr[i];
        arr[i]=min;
        arr[k]=tem;
        }
    }
    cout<<"sorted array is: "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<"  ";
    }
}