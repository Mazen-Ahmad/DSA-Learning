#include<iostream>
#include<queue>
#include<map>
using namespace std;

class node
{
    public:
    int data;
    node* left;
    node* right;
    
    node(int d)
    {
        this->data=d;
        this->left=NULL;
        this->right=NULL;
    }
};

node* buildTree(node* root)
{
    cout<<"enter the data: "<<endl;
    int data;
    cin>>data;
    root=new node(data);
    
    if(data==-1)
    return NULL;
    cout<<"Enter data for inserting in left of"<<data<<endl;
    root->left=buildTree(root->left);
    cout<<"Enter data for inserting in right of"<<data<<endl;
    root->right=buildTree(root->right);
    return root;
}
void mapping(node* root,map<node*,node*> &m){
    
}
int main()
{
    node* root=NULL;
    map<node*,node*> m;
    root=buildTree(root);
    mapping(root,m);
}