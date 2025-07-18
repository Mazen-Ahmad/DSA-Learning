#include<iostream>
using namespace std;
/*int div(int arr[],int s,int e)
{
    int p=arr[s];
    int c=0;
    for(int i=s+1;i<=e;i++)
    {
        if(arr[i]<=p)
        c++;
    }
    int pindx=s+c;
    swap(arr[pindx],arr[s]);
    int i=s,j=e;
    while(i<pindx && j>pindx)
    {
        while(arr[i]<=p)
            i++;
        while(arr[j]>p)
            j--;
        if(i<pindx && j>pindx)
        swap(arr[i++],arr[j--]);
    }
    return pindx;
}
void qsort(int arr[],int s,int e)
{
    if(s>=e)
    return;
    int t=div(arr,s,e);
    qsort(arr,s,t-1);
    qsort(arr,t+1,e);
}*/
int part(int arr[],int s,int e)
{
    int c=0;
    for(int i=s+1;i<=e;i++)
    {
        if(arr[s]>=arr[i])
        {
            c++;
        }
    }
    swap(arr[s],arr[s+c]);
    for(int i=s,j=e;i<(s+c)&&j>(s+c);)
    {
        for(;i<(s+c);)
        {
            if(arr[i]<=arr[s+c])
            i++;
            else 
            break;
        }
        for(;j>(s+c);)
        {
            if(arr[j]>arr[s+c])
            j--;
            else
            break;
        }
        if(arr[i]>arr[(s+c)])
        {
        swap(arr[i],arr[j]);
        i++;
        j--;
        }
    }
    return (s+c);
}
void qsort(int arr[],int s,int e)
{
    if(s>=e)
    {
        return;
    }
    int p=part(arr,s,e);
    qsort(arr,s,p-1);
    qsort(arr,p+1,e);
}
int main()
{
    int n;
    cout<<"enter no. of elements in array"<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter array:"<<endl;
    for(int i=0;i<n;i++)
        cin>>arr[i];
    qsort(arr,0,n-1);
    cout<<"sorted array is:"<<endl;
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
    return 0;
}
