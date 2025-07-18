#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node* next;
};
struct Node* t = NULL;
void push(int x) {
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
    temp->data = x;
    temp->next = t;
    t = temp;
}
void pop() {
    struct Node* temp;
    if (t == NULL) return;
    temp = t;
    t = t->next;
    free(temp);
}
void display() {
    struct Node* temp;
    if (t == NULL) return;
    temp = t;
    printf("Elements of stack are: ");
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}
int main() {
    push(1);
    push(2);
    push(3);
    push(4);
    printf("Before pop:\n");
    display();
    pop();
    printf("After pop:\n");
    display();
    return 0;
}