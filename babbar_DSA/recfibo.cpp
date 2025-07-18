#include<iostream>
using namespace std;
int b=0;
int fibo(int n)
{
    int t,f;
    if(n==1)
    return 0;
    else if(n==2)
    return 1;
    f=fibo(n-1);
    t=b+f;
    b=f;
    return t;
}
int main()
{
    int n;
    cout<<"enter term of fibonacci series u want??"<<endl;
    cin>>n;
    cout<<"term is: "<<fibo(n);
}
//also ans is: int ans=fib(n-1)+fib(n-2);