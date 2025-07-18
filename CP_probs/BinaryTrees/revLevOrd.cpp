#include<iostream>
#include<queue>
#include<stack>
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

void revlordtrav(node* root)
{
    queue<node*> q;
    stack<node*> s;
    q.push(root);
    q.push(NULL);
    while(!q.empty())
    {
        node* temp=q.front();
        s.push(temp);
        q.pop();
        if(temp==NULL)
        {
            if(!q.empty())
                q.push(NULL);
        }
        
        else
        {
        if(temp->right)
        q.push(temp->right);

        if(temp->left)
        q.push(temp->left);
        }
    }
    s.pop();
    while(!s.empty())
    {
    node* temp=s.top();
    if(temp==NULL)
    {
        cout<<endl;
        s.pop();
    }
    else
    {
        cout<<temp->data<<" ";
        s.pop();
    }
    }
}
int main()
{
    node* root=NULL;
    
    root=buildTree(root);
    
    revlordtrav(root);
}