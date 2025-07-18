#include<bits/stdc++.h>
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
void bfs(unordered_map<int,vector<int>> g,vector<int> &ans,unordered_map<int,bool> &visited,int node){
    queue<int> q;
    q.push(node);
    visited[node]=true;
    while(!q.empty()){
        int fn=q.front();
        ans.push_back(fn);
        q.pop();
        for(auto i:g[fn]){
            if(!visited[i]){
                q.push(i);
                visited[i]=true;
            }
        }
    }
}
int main(){
    int n,m;
    cout<<"enter no. of nodes and edges: ";
    cin>>n>>m;
    int u,v;
    graph G;
    cout<<"next: ";
    for(int i=0;i<m;i++){
        cin>>u>>v;
        G.addEdge(u,v,0);
    }
    unordered_map<int,bool> visited;
    vector<int> ans;
    for(int i=0;i<n;i++){
        if(!visited[i]){
            bfs(G.g,ans,visited,i);
        }
    }
    G.printAdj();
    cout<<endl;
    for(auto i:ans){
        cout<<i<<", ";
    }
}