#include<iostream>
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
node* LCA(node* root,int n1,int n2)
{
    if(root==NULL)
    return NULL;

    if(root->data==n1 || root->data==n2)
    return root;
    
    node* l=LCA(root->left,n1,n2);
    node* r=LCA(root->right,n1,n2);

    if(l!=NULL && r!=NULL)
    return root;
    else if(l!=NULL && r==NULL)
    return l;
    else if(l==NULL && r!=NULL)
    return r;
    else
    return NULL;
}
int main()
{
    node* root;
    root=bldtree(root);
    int n1,n2;
    node*ans=LCA(root,n1,n2);
    cout<<ans->data;
} 