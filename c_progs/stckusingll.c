#include <stdio.h>
#include <stdlib.h>
struct node {
    int info;
    struct node *ptr;
}*top,*top1,*temp;
int count = 0;
void push(int data) {
     if (top == NULL)
    {
        top =(struct node *)malloc(1*sizeof(struct node));
        top->ptr = NULL;
        top->info = data;
    }
    else
    {
        temp =(struct node *)malloc(1*sizeof(struct node));
        temp->ptr = top;
        temp->info = data;
        top = temp;
    }
    count++;
    printf("Node is Inserted\n\n");
}

int pop() {
     top1 = top;
 
    if (top1 == NULL)
    {
        printf("\nStack Underflow\n");
        return -1;
    }
    else
        top1 = top1->ptr;
    int popped = top->info;
    free(top);
    top = top1;
    count--;
    return popped;
}

void display() {
    top1 = top;
 
    if (top1 == NULL)
    {
        printf("\nStack Underflow\n");
        return;
    }
    
    printf("The stack is \n");
    while (top1 != NULL)
    {
        printf("%d--->", top1->info);
        top1 = top1->ptr;
    }
    printf("NULL\n");
}

int main() {
    int choice, value;
    printf("\nImplementation of Stack using Linked List\n");
            printf("\nEnter the value to insert: ");
            scanf("%d", &value);
            push(value);
            printf("Popped element is :%d\n", pop());
            display();
            exit(0);
            printf("\nWrong Choice\n");
        }
