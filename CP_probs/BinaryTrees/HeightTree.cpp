#include<iostream>
using namespace std;
class node
{
    public:
    int data;
    node* left;
    node* right;

    node(int d){
        this->data=d;
        this->left=NULL;
        this->right=NULL;
    }
};
node* bldtree(node* root)
{
    int d;
    cout<<"enter root: "<<endl;
    cin>>d;
    root=new node(d);
    if(d==-1)
    {
        return NULL;
    }
    cout<<"enter data to left of node: "<<d<<endl;
    root->left=bldtree(root->left);
    cout<<"enter data to right of node: "<<d<<endl;
    root->right=bldtree(root->right);
}
int findHght(node* root)
{
    int l=0,r=0;
    if(root==NULL)
    return ;
    
    l=findHght(root->left);
    r=findHght(root->right);

    int ans=max(l,r)+1;
    return ans;
}
int main()
{
    node* root;
    root=bldtree(root);

    findHght(root);
}