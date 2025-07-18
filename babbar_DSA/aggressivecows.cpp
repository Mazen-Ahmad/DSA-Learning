#include<iostream>
using namespace std;
int main()
{
    int t,n,k;
    cin>>t;
    for(int chal=0;chal<t;chal++)
    {
        cin>>n>>k;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        for(int i=0;i<n;i++)
        {
            for(int j=i;j<n;j++)
            {
                if(arr[j]<arr[i])
                {
                    int tem=arr[i];
                    arr[i]=arr[j];
                    arr[j]=tem;
                }
            }
        }
        int min=0,max=arr[n-1],mid,ans;
        mid=min+(max-min)/2;
        while(max>min+1)
        {
        int pos=arr[0],cc=1;
        for(int i=0;i<n;i++)
        {
          if(arr[i]-pos>=mid)
          {
            cc++;
            pos=arr[i];
          }  
        }
        if(cc==k)
        {
            ans=mid;
            min=mid;
        }
        else if(cc!=k)
        {
            max=mid;
        }
        mid=min+(max-min)/2;
    }
    cout<<"ans is: "<<ans;
    }
}