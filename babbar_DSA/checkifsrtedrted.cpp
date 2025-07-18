/*#include<iostream>
using namespace std;
int main()
{
    int n,c=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n-1;i++)
    {
        if(arr[i]>arr[i+1])
        c++;
    }
    if(c==0 || c==1)
    cout<<"True";
    else
    cout<<"False";
}*/

/*#include<iostream>
using namespace std;
bool srted(int arr[],int n)
{
    if (n==0 || n==1)// n==0 for no elements in array
    {
        return true;
    }
    if (arr[0]>arr[1])
    return false;
    else{
        bool rm=srted(arr+1,n-1);
        return rm;
        }
}
int main()
{
    int n;
    cout<<"enter array size";
    cin>>n;
    cout<<"enter array";
    int *arr=new int[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    bool ans=srted(arr,n);
    if(ans){
        cout<<"sorted";
    }
    else
    cout<<"not sorted";
}*/

#include<iostream>
using namespace std;
int sum(int arr[],int n)
{
    if(n==1)
    return arr[0];
    return arr[0]+sum(arr+1,n-1);// arr+1 changes the array, now arr[0] is gone and arr[1] is the
}
int main()
{
    int n;
    cout<<"enter the size";
    cin>>n;
    cout<<"enter the array";
    int *arr=new int[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }  
    cout<<"ans is: "<<sum(arr,n);

}