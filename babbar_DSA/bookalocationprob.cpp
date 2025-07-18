#include<iostream>
using namespace std;
int main()
{
    
    int n,stu,s=0,s2,ans,t;
    cin>>t;
    for(int run=0;run<t;run++)
    {
    cin>>n>>stu;
    int arr[n];
    for(int i=0;i<n;i++)
    {
       cin>>arr[i];
       s=s+arr[i];
    }
    int min=0,max=s+1;
    int mid=min+(max-min)/2;
    while(max>min+1)
    {
        int i=0,use;
        for(use=1;use<=stu;use++)
        {
        s2=0;
        for(;i<n && s2+arr[i]<=mid;i++)
        {
            s2=s2+arr[i];
        }
        if(i==n)
        break;                                                                                    
        }
        if(i==n)
        {
           ans=mid;
           max=mid;
        }
        else if(i!=n)
        {
            min=mid;
        }
        mid=min+(max-min)/2;
    }
cout<<"ans is: "<<ans;
    }
}
