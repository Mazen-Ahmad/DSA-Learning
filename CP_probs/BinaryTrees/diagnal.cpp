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
void diag(node* root,int hd,map<int,vector<int>> &m)
{
    if (root == NULL)
        return;
    
    m[hd].push_back(root->data);
    diag(root->left, hd + 1, m);
    diag(root->right, hd, m);
}
int main()
{
    node* root;
    root=bldtree(root);
    
    map<int,vector<int>> res;
    diag(root,0,res);
    for(auto i:res)
    {
        for(auto j:i.second)
        {
            cout<<j<<" ";
        }
    }
} 