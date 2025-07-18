#include<iostream>
#include<vector>
using namespace std;
void rat(vector<vector<int>> arr,vector<string> &ans,string out,int i,int j,int l)
{
    if(i==l-1 && j==l-1)
    {
        ans.push_back(out);
        return;
    }
    if(j+1!=l && arr[i][j+1]==1)
    {
        out.push_back('R');
        rat(arr,ans,out,i,j+1,l);
    }
    if(i+1!=l && arr[i+1][j]==1)
    {
        out.push_back('D');
        rat(arr,ans,out,i+1,j,l);
    }
    if(j-1>=0 && arr[i][j-1]==1)
    {
        out.push_back('L');
        rat(arr,ans,out,i,j-1,l);
    }
    if(i-1>=0 && arr[i-1][j]==1)
    {
        out.push_back('U');
        rat(arr,ans,out,i-1,j,l);
    }
    
}
int main()
{
    cout<<"enter one side length of maze: ";
    int l,val;
    cin>>l;
    cout<<"enter the rooms status: ";
    vector<vector<int>> arr(l);
    for(int i=0;i<l;i++)
    {
        for(int j=0;j<l;j++)
        {
            cin>>val;
            arr[i].push_back(val);
        }
    }
    vector<string> ans;
    string out;
    rat(arr,ans,out,0,0,l);
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<endl;
    }
}