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
int main(){
    int n,m;
    cout<<"enter no. of nodes and edges: ";
    cin>>n>>m;
    int u,v;
    graph g;
    for(int i=0;i<m;i++){
        cin>>u>>v;
        g.addEdge(u,v,0);
    }
    g.printAdj();
}