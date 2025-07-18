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
node* buildtree(node* root)
{
    int d;
    cout<<"enter root data: ";
    cin>>d;
    root=new node(d);

    if(d==-1)
    {
        return NULL;
    }
    cout<<"enter data to insert to left of: "<<d<<endl;
    root->left=buildtree(root->left);
    cout<<"enter data to insert to right of: "<<d<<endl;
    root->right=buildtree(root->right);
    return root;
}
void inOrder(node* root)
{
    if(root==NULL)
    return ;
    inOrder(root->left);
    cout<<root->data<<" ";
    inOrder(root->right);
}
int main()
{
    node* root=NULL;

    root=buildtree(root);
    inOrder(root);
}