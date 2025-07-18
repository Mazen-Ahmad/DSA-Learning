#include<bits/stdc++.h>
using namespace std;
int pmax=0;
vector<int> bset;
void knapsack(vector<int> pft,vector<int> cost,int wght,int sum,int idx,vector<int> &ans,int p,vector<vector<int>> &dp){
    
    if(idx>=cost.size()){
        if(p>pmax){
            pmax=p;
            bset=ans;
        }
        return;
    }
    if(dp[idx][sum]!=-1){
        return;
    }
    if(sum+cost[idx]<=wght){
        ans.push_back(cost[idx]);
        knapsack(pft,cost,wght,sum+cost[idx],idx+1,ans,p+pft[idx],dp);
        ans.pop_back();
    }
    knapsack(pft,cost,wght,sum,idx+1,ans,p,dp);
}
int main(){
    int n;
    cin>>n;
    vector<int> pft(n);
    vector<int> cost(n);
    for(int i=0;i<n;i++){
        cin>>pft[i];
    }
    for(int i=0;i<n;i++){
        cin>>cost[i];
    }
    int wght;
    cin>>wght;
    
    vector<int> ans;
    vector<vector<int>> dp(n,vector<int> (wght+1,-1));
    knapsack(pft,cost,wght,0,0,ans,0,dp);
    
    cout<<pmax;
}