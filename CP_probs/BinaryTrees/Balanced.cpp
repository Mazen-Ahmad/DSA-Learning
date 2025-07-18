#include<iostream>
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
node* bldtree(node* root)
{
    int d;
    cout<<"Enter the node: "<<endl;
    cin>>d;
    if(d==-1)
    return NULL;
    root=new node(d);
    cout<<"enter data to left of "<<d<<endl;
    root->left=bldtree(root->left);
    cout<<"enter data to right of "<<d<<endl;
    root->right=bldtree(root->right);
    return root;
}
pair<bool,int> isBalanced(node* root)
{
    if(root==NULL)
    {
        pair<bool,int> p=make_pair(true,0);
        return p;
    }
    pair<bool,int> l=isBalanced(root->left);
    pair<bool,int> r=isBalanced(root->right);
    
    pair<bool,int> ans;
    if(l.first && r.first && abs(l.second-r.second)<=1)
    {
        ans.first=true;
        ans.second=max(l.second,r.second)+1;
        return ans;
    }
    else
    {
        ans.first=false;
        return ans;
    }
}
int main()
{
    node* root;
    root=bldtree(root);
    pair<bool,int> ans=isBalanced(root);
    if(ans.first)
    cout<<"TREE IS BALANCED ";
    else 
    cout<<"NOT BALANCED ";
}