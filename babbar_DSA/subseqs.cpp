#include<iostream>
#include<vector>
using namespace std;
void subseq(string str,vector<string> &ans,string out,int i)
{
    if(i>=str.length())
    {
        ans.push_back(out);
        return;
    }
    subseq(str,ans,out,i+1);
    out.push_back(str[i]);
    subseq(str,ans,out,i+1);
}
int main()
{
    string str,out;
    vector<string> ans;
    cout<<"enter the string: ";
    cin>>str;
    subseq(str,ans,out,0);
    cout<<"combinations are: "<<endl;
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<endl;
    }
}