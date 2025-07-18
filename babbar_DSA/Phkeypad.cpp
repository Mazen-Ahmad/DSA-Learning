#include<iostream>
#include<vector>
using namespace std;
void combos(vector<string> row,vector<string> &ans, int i,string out)
{
    if(i>=row.size())
    {
        ans.push_back(out);
        return;
    }
    string k=row[i];
    for(int n=0;n<row[i].length();n++)
    {
        out.push_back(k[n]);
        combos(row,ans,i+1,out);
        out.pop_back();
    }
}
void cllme(string s,int i,vector<string> &ans, vector<string> &row, string t)
{
    if(i>=s.length())
    {
        return;
    }
    if(s[i]=='2')
        t="abc";
    if(s[i]=='3')
        t="def";
    if(s[i]=='4')
        t="ghi";
    if(s[i]=='5')
        t="jkl";
    if(s[i]=='6')
        t="mno";
    if(s[i]=='7')
        t="pqrs";
    if(s[i]=='8')
        t="tuv";
    if(s[i]=='9')
        t="wxyz";
    row.push_back(t);
    cllme(s,i+1,ans,row,t);
}
int main()
{
    string s,t;
    vector<string> ans;
    cout<<"enter the string: ";
    cin>>s;
    vector<string> row;
    cllme(s,0,ans,row,t);
    string out;
    combos(row,ans,0,out);
    cout<<"possible combos are: ";
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<endl;
    }
}