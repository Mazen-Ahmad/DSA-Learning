#include<iostream>
using namespace std;
string arr[10]= {"zero","one","two","three","four","five","six","seven","eight","nine"};
void numtoalfa(long n)
{
    if (n==0)
    {
        
        return ;
    }
    numtoalfa(n/10);//upon calls, fn(4) returns null but executes cout, it only serves to reverse the printing order
    
    cout<<arr[n%10]<<" ";
}
int main()
{
    cout<<"enter the no.";
    int long n;
    cin>>n;
    numtoalfa(n);
}

