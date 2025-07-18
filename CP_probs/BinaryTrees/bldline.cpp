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
void bldline(node* root,pair<int,int> temp,pair<int,int> &ans)
{
    if(root==NULL)
    {
        if(ans.second<temp.second)
        ans=temp;
        else if(ans.second==temp.second)
        {
            if(ans.first<temp.first)
            ans.first=temp.first;
        }
        return;
    }
    temp.first=temp.first+(root->data);
    temp.second++;
    bldline(root->left,temp,ans);
    bldline(root->right,temp,ans);
}
int main()
{
    node* root;
    root=bldtree(root);
    pair<int,int> ans={0,0};
    pair<int,int> p={0,0};
    bldline(root,p,ans);
    cout<<"MAX sum and length is: "<<ans.first<<" and "<<ans.second;
} 