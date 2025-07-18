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
bool cycle(unordered_map<int,vector<int>> g,unordered_map<int,int> parent,unordered_map<int,bool> &visited,int node){
    parent[node]=-1;
    queue<int> q;
    q.push(node);
    visited[node]=true;
    while(!q.empty()){
        int fn=q.front();
        q.pop();
        for(auto i:g[fn]){
            if(visited[i]==true && i!=parent[fn]){
                return 1;
            }
            if(!visited[i]){
                q.push(i);
                visited[i]=true;
                parent[i]=fn;
            }
        }
    }
    return 0;
}
bool chckcycledfs(int node,unordered_map<int,bool> &vis,unordered_map<int,vector<int>> &g,int par){
    vis[node]=1;
    for(auto i:g[node]){
        if(!vis[i]){
        bool ans= chckcycledfs(i,vis,g,node);
        if(ans){
            return true;
        }
        }
        else if(i!=par){
            return true;
        }
    }
    return false;
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
    G.printAdj();
    unordered_map<int,bool> visited;
    unordered_map<int,int> parent;
    bool ans;
    for(int i=0;i<n;i++){
        if(!visited[i]){
            ans=cycle(G.g,parent,visited,i);
            if(ans==1)
            break;
        }
    }
    if(ans){
        cout<<"cycle is there";
    }
    else
    cout<<"no cycle";
}
