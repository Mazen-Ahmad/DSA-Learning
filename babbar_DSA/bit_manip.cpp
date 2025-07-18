#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n,bit,bin[32],i;
    cin>>n;
    for(i=31;i>=0;i--)
    {
       bit = n & 1;
       bin[i]=bit;
       n = n>>1;
    }
    for(i=0;i<32;i++)
    {
        cout<<bin[i];
    }
    return 0;
}