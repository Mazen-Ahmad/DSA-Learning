#include<iostream>
using namespace std;
bool pld(string s,int st,int e)
{
    if(st>=e)
    {
        return true;
    }
    if(s[st]!=s[e])
    {
        return false;
    }
    pld(s,st+1,e-1);

}
int main()
{
    string s;
    cout<<"enter the string"<<endl;
    cin>>s;
    if(pld(s,0,s.length()-1))
    {
        cout<<"is palindrome string";
    }
    else{
        cout<<"not palindrome";
    }
}