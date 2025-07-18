#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node* next;
};
struct Node* head = NULL;
void insert(int x) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = x;
    newNode->next = head;
    head = newNode;
}
void reverse() {
    struct Node *prevNode, *curNode;
    if (head == NULL) {
        return;
    }
    prevNode = head;
    curNode = head->next;
    head = head->next;
    prevNode->next = NULL;
    while (head != NULL) {
        head = head->next;
        curNode->next = prevNode;
        prevNode = curNode;
        curNode = head;
    }
    head = prevNode;
}
void display() {
    struct Node* temp = head;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
}
int main() {
    insert(1);
    insert(2);
    insert(3);
    printf("Original list: ");
    display();
    reverse();
    printf("\nNew list: ");
    display();
    return 0;
}
