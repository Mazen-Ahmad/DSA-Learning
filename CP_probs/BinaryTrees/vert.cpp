#include<iostream>
#include<queue>
#include<stack>
#include<map>
using namespace std;
class node{
    public:
    int data;
    node* right;
    node* left;

    node(int d){
        this->data=d;
        this->right=NULL;
        this->left=NULL;
    }
};
node* bldtree(node* root)
{
    cout<<"enter data to insert: ";
    int d;
    cin>>d;
    root=new node(d);
    
    if(d==-1)
    {
        return NULL;
    }
    cout<<"Enter data to left of node "<<d<<endl;
    root->left=bldtree(root->left);
    cout<<"Enter data to right of node "<<d<<endl;
    root->right=bldtree(root->right);
    return root;
}
vector<int> vert(node* root)
{
    map<int,map<int,vector<int> > > m;
    queue <pair <node* , pair<int,int> > > q;

    if(root==NULL)
    return;
    q.push(make_pair(root,make_pair(0,0)));
    while(!q.empty())
    {
        pair <node* , pair<int,int> > temp;
        temp=q.front();
        q.pop();
        node* fn=temp.first;
        int hd=temp.second.first;
        int lvl=temp.second.second;

        m[hd][lvl].push_back(fn->data);
        if(fn->left)
            q.push(make_pair(fn->left,make_pair(hd-1,lvl+1)));
        if(fn->right)
            q.push(make_pair(fn->right,make_pair(hd+1,lvl+1)));
    }
    vector<int> res;
    for(auto i:m)
    {
        for(auto j:i.second)
        {
            for(auto k:j.second)
            {
                res.push_back(k);
            }
        }
    }
    return res;
}
int main()
{
    node* root;
    root=bldtree(root);

    vector<int> res=vert(root);
    for(int i=0;i<res.size();i++)
    {
        cout<<res[i]<<" ";
    }
} 