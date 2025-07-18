#include<iostream>
#include<queue>
#include<stack>
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
void tleft(node* root, vector<int> &ans)
{
    if((root==NULL)||(root->left==NULL && root->right==NULL))
    return;
    ans.push_back(root->data);
    if(root->left)
    tleft(root->left, ans);
    else
    tleft(root->right, ans);
}
void tleaf(node* root, vector<int> &ans)
{
    if(root==NULL)
    return;
    if(root->left==NULL && root->right==NULL)
    {
        ans.push_back(root->data);
        return;
    }
    tleaf(root->left, ans);
    tleaf(root->right, ans);
}
void tright(node* root, vector<int> &ans)
{
    if((root==NULL)||(root->left==NULL && root->right==NULL))
    return;
    if(root->right)
    tright(root->right, ans);
    else
    tright(root->left, ans);
    ans.push_back(root->data);
}
vector<int> boundry(node* root)
{
    vector<int> ans;
    if(root==NULL)
    return ans;
    ans.push_back(root->data);
    tleft(root->left,ans);
    tleaf(root->left,ans);
    tleaf(root->right,ans);
    tright(root->right,ans);
    return ans;
}

int main()
{
    node* root;
    root=bldtree(root);

    vector<int> res=boundry(root);
    for(int i=0;i<res.size();i++)
    {
        cout<<res[i]<<" ";
    }
} 