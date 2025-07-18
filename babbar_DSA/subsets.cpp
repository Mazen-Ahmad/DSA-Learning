#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void sub(vector <int> arr,vector<vector <int> > &ans,vector<int> out, int i)
{
    if(i>=arr.size())
    {
        ans.push_back(out);
        return;
    }
    sub(arr,ans,out,i+1);
    
    out.push_back(arr[i]);
    sub(arr,ans,out,i+1);
}
int main()
{
    int in;
    vector <int> arr;
    cout<<"enter the arr and type end when done: ";
    while(cin>>in)//takes input until a non int val is passed
    {
        arr.push_back(in);
    }
    vector<vector <int> > ans;
    vector<int> out;
    sub(arr,ans,out,0);
    cout<<"subsets are: ";
    for(int i=0;i<ans.size();i++)
    {
        for(int j=0;j<ans[i].size();j++)
        {
            cout<<ans[i][j];
        }
        cout<<" , ";
    }
}