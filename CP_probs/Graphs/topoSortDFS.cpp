#include<bits/stdc++.h>
#include<stack>
using namespace std;
class graph{
    public:
    unordered_map<int,vector<int>> g;

    void addEdge(int u,int v,bool dir){
        g[u].push_back(v);
        if(dir==0){
            g[v].push_back(u);
        }
    }
    void printAdj(){
        for(auto i:g){
            cout<<i.first<<"->";
            for(auto j:i.second){
                cout<<j<<", ";
            }
            cout<<endl;
        }
    }
};
void dfs(int node,stack<int> &s,unordered_map<int,bool> &vis,unordered_map<int,vector<int>> g){
    vis[node]=true;
    for(auto i:g[node]){
        if(!vis[i])
        dfs(i,s,vis,g);
    }
    s.push(node);
}
int main(){
    int n,m;
    cout<<"enter no. of nodes and edges: ";
    cin>>n>>m;
    int u,v;
    graph G;
    for(int i=0;i<m;i++){
        cin>>u>>v;
        G.addEdge(u,v,1);
    }
    G.printAdj();
    stack<int> s;
    unordered_map<int,bool> vis;
    for(int i=0;i<n;i++){
        if(!vis[i]){
            dfs(i,s,vis,G.g);
        }
    }
    vector<int> ans;
    while(!s.empty()){
        ans.push_back(s.top());
        s.pop();
    }
}