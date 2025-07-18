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
pair<int,int> findDmtr(node* root)
{
    pair<int,int> l,r,ans;
    if(root==NULL)
    {
        pair<int,int> p=make_pair(0,0);
        return p;
    }
    l=findDmtr(root->left);
    r=findDmtr(root->right);
    
    int op1=l.first;
    int op2=r.first;
    int op3=l.second+r.second+1;

    ans.first=max(op1,max(op2,op3));
    ans.second=max(l.second,r.second)+1;
    return ans;
}
int main()
{
    node* root;
    root=bldtree(root);

    findDmtr(root);
}