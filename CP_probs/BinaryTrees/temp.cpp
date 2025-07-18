#include<bits/stdc++.h>
using namespace std;
int scs(string&a,string&b){
    int m=a.length(),n=b.length();
    vector<vector<int>>dp(m+1,vector<int>(n+1,0));
    for(int i=0;i<=m;i++)
    for(int j=0;j<=n;j++){
        if(!i)
        dp[i][j]=j;
        else if(!j)
        dp[i][j]=i;
        else if(a[i-1]==b[j-1])
        dp[i][j]=1+dp[i-1][j-1];
        else 
        dp[i][j]=1+min(dp[i-1][j],dp[i][j-1]);
    }
return dp[m][n];
}
int main(){
string s1,s2;
cout<<"Enter string 1: ";
cin>>s1;
cout<<"Enter string 2: ";
cin>>s2;
cout<<"Length of the shortest string: "<<scs(s1,s2);
}