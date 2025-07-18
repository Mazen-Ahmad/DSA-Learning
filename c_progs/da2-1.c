#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node *fc;
    struct node *nexts;
};
struct node* newnode(int data) {
    struct node* temp=(struct node*)malloc(sizeof(struct node));
    temp->data=data;
    temp->fc=NULL;
    temp->nexts=NULL;
    return temp;
}
void addch(struct node*parent,int data){
    struct node*child=newnode(data);
    if(parent->fc==NULL)
        parent->fc=child;
        else{
        struct node*temp=parent->fc;
        while(temp->nexts!=NULL)
        temp=temp->nexts;
        temp->nexts=child;
    }
}
void prerec(struct node*root){
    if(root==NULL)
    return;
    printf("%d ",root->data);
    prerec(root->fc);
    prerec(root->nexts);
}
void prenonrec(struct node*root){
    if(root==NULL)return;
    struct node*stack[100];
    int top=-1;
    stack[++top]=root;
    while(top>=0){
        struct node*temp=stack[top--];
        printf("%d ",temp->data);
        if(temp->nexts!=NULL)
        stack[++top]=temp->nexts;
        if(temp->fc!=NULL)
        stack[++top]=temp->fc;
    }
}
void inrec(struct node*root){
    if(root==NULL)return;
    inrec(root->fc);
    printf("%d ",root->data);
    inrec(root->nexts);
}
void innonrec(struct node*root){
    if(root==NULL)
    return;
    struct node*stack[100];
    int top=-1;
    while(1){
        while(root!=NULL){
            stack[++top]=root;
            root=root->fc;
        }
        if(top<0)
        break;
        root=stack[top--];
        printf("%d ",root->data);
        root=root->nexts;
    }
}
void postrec(struct node*root){
    if(root==NULL)return;
    postrec(root->fc);
    postrec(root->nexts);
    printf("%d ",root->data);
}
void postnonrec(struct node*root){
    if(root==NULL)
    return;
    struct node*stack[100];
    int top=-1;
    do{
        while(root!=NULL){
            if(root->nexts!=NULL)
            stack[++top]=root->nexts;
            stack[++top]=root;
            root=root->fc;
        }
        root=stack[top--];
        if(root->nexts!=NULL&&stack[top]==root->nexts){
            top--;
            stack[++top]=root;
            root=root->nexts;
        }
        else{
            printf("%d ",root->data);
            root=NULL;
        }
    }
    while(top>=0);
}
int main(){
    struct node*root=newnode(9);
    addch(root,5);
    addch(root,7);
    addch(root,2);
    addch(root->fc,3);
    addch(root->fc,9);
    addch(root->fc->fc,8);
    printf("Pre-order Traversal Recursive: ");
    prerec(root);
    printf("\nPre-order Traversal Non-Recursive: ");
    prenonrec(root);
    printf("\nIn-order Traversal Recursive: ");
    inrec(root);
    printf("\nIn-order Traversal Non-Recursive: ");
    innonrec(root);
    printf("\nPost-order Traversal Recursive: ");
    postrec(root);
    printf("\nPost-order Traversal Non-Recursive: ");
    postnonrec(root);
}
