#include<iostream>
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
node* bldtree(node* root)
{
    cout<<"enter data: ";
    int d;
    cin>>d;
    if(d==-1)
    {
        return NULL;
    }
    root=new node(d);

    cout<<"enter data to left of: "<<d<<endl;
    root->left=bldtree(root->left);
    cout<<"enter data to right of: "<<d<<endl;
    root->right=bldtree(root->right);
    return root;
}
void InOrder(node* root)
{
    stack<node*> s;
    while(!s.empty())
    {
        while(root!=NULL)
        {
        s.push(root);
        root=root->left;
        }
        root=s.top();
        s.pop();
        cout<<root->data<<" ";
        root=root->right;
    }

}
int main()
{
    node* root=NULL;
    root=bldtree(root);
}