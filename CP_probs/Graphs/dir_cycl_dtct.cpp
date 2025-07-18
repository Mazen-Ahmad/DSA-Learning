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
bool cycldfs(int node,unordered_map<int,bool> &vis,unordered_map<int,vector<int>> g,unordered_map<int,bool> &dfsvis){
    
    vis[node]=true;
    dfsvis[node]=true;
    for(auto i:g[node]){
        if(!vis[i]){
        bool ans=cycldfs(i,vis,g,dfsvis);
        if(ans)
        return true;
        }
        else if(dfsvis[i]){
            return true;
        }
    }
    dfsvis[node]=false;
    return false;
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
    vector<int> ans;
    unordered_map<int,bool> vis;
    unordered_map<int,bool> dfsvis;
    for(int i=0;i<n;i++){
        if(!vis[i]){
            cycldfs(i,vis,G.g,dfsvis);
        }
    }
    for(auto i:ans){
        cout<<i<<", ";
    }
}