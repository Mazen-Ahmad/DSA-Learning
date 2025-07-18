#include<iostream>
using namespace std;
int power(int a,int n)
{
    if(n==1)
    return a;
    int ans=a*power(a,n-1);
    return ans;
}
int main()
{
    int a,n;
    cout<<"enter the num";
    cin>>a;
    cout<<"enter power";
    cin>>n;
    cout<<"ans is: "<<power(a,n);
}
