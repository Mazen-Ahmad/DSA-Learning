#include <stdio.h>
#include <stdlib.h>
struct node {
    int data;
    struct node* l;
    struct node* r;
};
struct node* creatnode(int data) {
    struct node* newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data=data;
    newnode->l=NULL;
    newnode->r=NULL;
    return newnode;
}
struct node* insertNode(struct node* root, int data){
    if(root==NULL) 
    root=creatnode(data);
    else if(data<root->data) 
    root->l=insertNode(root->l, data);
    else 
    root->r=insertNode(root->r,data);
    return root;
}
struct node* deleteln(struct node* root, int data){
    if(root==NULL) 
    return root;
    else if(data<root->data) 
    root->l=deleteln(root->l,data);
    else if(data>root->data)
    root->r=deleteln(root->r,data);
    else{
        if(root->l==NULL && root->r==NULL) {
            free(root);
            root=NULL;
        }
        else
        printf("The node with data %d is not a leaf node.\n",data);
    }
    return root;
}
struct node* minvalnode(struct node* node) {
    struct node* current=node;
    while (current && current->l!=NULL) {
        current=current->l;
    }
    return current;
}
struct node* delete1cn(struct node* root, int data) {
    if (root==NULL) 
    return root;
    else if(data<root->data) 
    root->l=delete1cn(root->l,data);
    else if(data>root->data) 
    root->r=delete1cn(root->r,data);
    else {
        if(root->l==NULL) {
            struct node* temp=root->r;
            free(root);
            return temp;
        }
        else if(root->r==NULL) {
            struct node* temp=root->l;
            free(root);
            return temp;
        }
        else {
            struct node* temp=minvalnode(root->r);
            root->data=temp->data;
            root->r=delete1cn(root->r,temp->data);
        }
    }
    return root;
}
struct node* delete2cn(struct node* root, int data) {
    if (root==NULL)
    return root;
    else if (data<root->data)
    root->l=delete2cn(root->l,data);
    else if (data > root->data)
    root->r=delete2cn(root->r,data);
    else{
        struct node* temp=minvalnode(root->r);
        root->data=temp->data;
        root->r=delete2cn(root->r,temp->data);
    }
    return root;
}
struct node* searchnode(struct node* root, int data) {
    if (root==NULL || root->data==data)
    return root;
    else if (data<root->data)
    return searchnode(root->l,data);
    else 
    return searchnode(root->r,data);
}
void inordtrav(struct node* root){
    if (root!=NULL){
        inordtrav(root->l);
        printf("%d ",root->data);
        inordtrav(root->r);
    }
}
int main() {
    struct node* root = NULL;
    root = insertNode(root, 50);
    root = insertNode(root, 30);
    root = insertNode(root, 20);
    root = insertNode(root, 40);
    root = insertNode(root, 70);
    root = insertNode(root, 60);
    root = insertNode(root, 80);
    printf("Inorder traversal of the binary search tree: ");
    inordtrav(root);
    printf("\nDeleting leaf nodes...\n");
    root = deleteln(root, 20);
    printf("Inorder traversal of the binary search tree: ");
    inordtrav(root);
    printf("\nDeleting nodes having one child...\n");
    root = delete1cn(root, 30);
    printf("Inorder traversal of the binary search tree: ");
    inordtrav(root);
    printf("\nDeleting nodes having two children...\n");
    root = delete2cn(root, 50);
    printf("Inorder traversal of the binary search tree: ");
    inordtrav(root);
    printf("\nSearching nodes...\n");
    struct node* searchedNode = searchnode(root, 70);
    if (searchedNode!=NULL) 
    printf("The node with data %d was found.\n",searchedNode->data);
    else
    printf("The node was not found.\n");
}