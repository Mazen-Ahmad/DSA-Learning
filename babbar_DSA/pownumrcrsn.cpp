#include<iostream>
using namespace std;
int pow(int a, int b)
{
    if(b==1)
    {
        return a;
    }
    int ans=pow(a,b/2);
    if(b%2==0)
    {
        return ans*ans;
    }
    else{
        return a*ans*ans;
    }
}
int main()
{
    int a,b;
    cout<<"enter num and its power";
    cin>>a>>b;
    cout<<"answer is"<<pow(a,b);

}