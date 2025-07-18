#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n,i=0;
    float bin=0;
    cin>>n;
    while(n!=0)
    {
    int bit = n&1;
    bin=(bit*(pow(10,i)))+bin;
    n = n>>1;
    ++i;
    }
    cout<<bin;
    return 0;
}