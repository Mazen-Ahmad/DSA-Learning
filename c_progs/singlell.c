#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node* next;
};
struct Node* head = NULL;
void insertAtBeginning(int x) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = x;
    newNode->next = head;
    head = newNode;
}
void insertAtPosition(int x, int pos) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = x;
    if (pos == 1) {
        newNode->next = head;
        head = newNode;
        return;
    }
    struct Node* temp = head;
    for (int i = 1; i < pos - 1; i++) {
        if (temp == NULL) {
            printf("Invalid position\n");
            return;
        }
        temp = temp->next;
    }
    newNode->next = temp->next;
    temp->next = newNode;
}
void delete(int x) {
    struct Node* temp = head;
    struct Node* prev = NULL;
    if (temp != NULL && temp->data == x) {
        head = temp->next;
        free(temp);
        return;
    }
    while (temp != NULL && temp->data != x) {
        prev = temp;
        temp = temp->next;
    }
    prev->next = temp->next;
    free(temp);
}
void display() {
    struct Node* temp = head;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
}
int main() {
    insertAtBeginning(1);
    insertAtPosition(3, 2);
    insertAtPosition(7, 3);
    printf("Elements in singly linked list: ");
    display();
    delete(3);
    printf("\nAfter deletion: ");
    display();
    return 0;
}
 