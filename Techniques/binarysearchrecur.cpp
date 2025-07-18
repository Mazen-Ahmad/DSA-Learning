/*#include<iostream>
using namespace std;
int main()
{
    int n,k,min=0,c=1;
    cin>>n;
    int max=n;
    cin>>k;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int ind=(max+min)/2;c<=n/2;ind=(max+min)/2,c++)
    {
        if(k==arr[ind])
        {
            cout<<"found at index: "<<ind;
            break;
        }
        else if(k>arr[ind])
            min=ind;
        else if(k<arr[ind])
            max=ind;
    }
    if(c>n/2)
    cout<<"not found";
    return 0;
}*/

#include<iostream>
using namespace std;
void bnr(int *arr,int n,int k,int min,int max)
{
    if(max<min)
    {
        cout<<"not found";
        return ;
    }
    if(arr[(max+min)/2]==k)
    {
        cout<<"element found";
        return ;
    }
    else if(k>arr[(max+min)/2])
        bnr(arr,n,k,(max+min)/2+1,max);
    else if(k<arr[(max+min)/2])
        bnr(arr,n,k,min,(max+min)/2);
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
    int min=0,max=n-1;
    bnr(arr,n,k,min,max);
}