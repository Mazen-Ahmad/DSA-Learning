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
vector<int> zigzag(node* root)
{
    queue<node*> q;
    q.push(root);
    int rtl=-1;
    node* temp;
    vector<int> ans;
    while(!q.empty())
    {
        int s=q.size();
        vector<node*> v(s);
        for(int i=0;i<s;i++)
        {
        temp=q.front();
        q.pop();

        if(rtl==-1)
            v[i]=temp;
        else if(rtl==1)
            v[s-1-i]=temp;

        if(temp->left)
            q.push(temp->left);
        if(temp->right)
            q.push(temp->right);
        }
        rtl=rtl*-1;
        for(int i=0;i<v.size();i++)
        ans.push_back(v[i]->data);
    }
    return ans;
}

int main()
{
    node* root;
    root=bldtree(root);

    vector<int> res=zigzag(root);
    for(int i=0;i<res.size();i++)
    {
        cout<<res[i]<<" ";
    }
} 