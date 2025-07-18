#include<iostream>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int max=n,min=0,frst=n-1,last=0,c=0;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    for(int ind=(max+min)/2,ch=1;ch<=n/2;ind=(max+min)/2,ch++)
    {
        if(k==arr[ind])
        {
            for(int i=0;arr[ind-i]==k || arr[ind+i]==k;i++)
            {
                if(arr[ind-i]==k)
                frst=ind-i;
                if(arr[ind+i]==k)
                last=ind+i;
            }
            c++;
            break;
        }
        if(k>arr[ind])
        min=ind;
        if(k<arr[ind])
        max=ind;
    }
    if(c==0)
    cout<<"Not found";
    else 
    cout<<"total occurence: "<<(last-frst)+1;
}