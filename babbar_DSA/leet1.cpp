#include<iostream>
using namespace std;
int main()
{
    int n,o=0;
    cin>>n;
    while(n!=0)
    {
     o = (o*10)+(n%10);
     n=n/10;
    }
    if(o > 2147483647 || o < -2147483648)
        o=0;
        cout<<o;
        return 0;
}