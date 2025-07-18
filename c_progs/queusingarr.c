#include <stdio.h>
#define MS 100
int q[MS];
int front = -1;
int rear = -1;
void eq(int x) {
    if (rear == MS - 1) {
        printf("Queue overflow\n");
        return;
    }
    if (front == -1) front = 0;
    rear++;
    q[rear] = x;
}
void dq() {
    if (front == -1 || front > rear) {
        printf("Queue underflow\n");
        return;
    }
    front++;
}
void display() {
    if (front == -1 || front > rear) {
        printf("Queue is empty\n");
        return;
    }
    for (int i = front; i <= rear; i++) {
        printf("%d ", q[i]);
    }
}
int main() {
    eq(1);
    eq(2);
    eq(3);
    eq(4);
    printf("Queue after enqueue operations:");
    display();
    printf("\n");
    dq();
    printf("Queue after dequeue operations:");
    display();
    return 0;
}
