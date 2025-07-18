#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n,p,ans=0;
    cin>>n;
        for (int i=0;n!=0;i++)
        {
        int bit= n&1;
        if(bit==0)
        {
            ans=ans+pow(2,i);
        }
            n=n>>1;
        }
        cout<<ans;
        return 0;
}