#include<iostream>
#include<vector>
using namespace std;
void perm(string str,vector<string> &ans,int i)
{
    if(i>=str.length())
    {
        ans.push_back(str);
        return;
    }
    for(int j=i;j<str.length();j++)
    {
        swap(str[i],str[j]);
        perm(str,ans,i+1);
        swap(str[i],str[j]);
    }
}
int main()
{
    string str;
    cout<<"enter the string: ";
    cin>>str;
    vector<string> ans;
    perm(str,ans,0);
    cout<<"perms are: ";
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<endl;
    }
}