#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define MAX_SIZE 100
char stack[MAX_SIZE];
int top = -1;
void push(char x) {
    if (top == MAX_SIZE - 1) {
        printf("Error: Stack overflow\n");
        return;
    }
    top++;
    stack[top] = x;
}
char pop() {
    if (top == -1) {
        printf("Error: Stack underflow\n");
        return '\0';
    }
    char x = stack[top];
    top--;
    return x;
}
int precedence(char x) {
    if (x == '+' || x == '-') {
        return 1;
    }
    if (x == '*' || x == '/') {
        return 2;
    }
    return 0;
}
void infixToPostfix(char* infix, char* postfix) {
    int i, j;
    for (i = 0, j = 0; infix[i] != '\0'; i++) {
        if (isalnum(infix[i])) {
            postfix[j] = infix[i];
            j++;
        } else if (infix[i] == '(') {
            push(infix[i]);
        } else if (infix[i] == ')') {
            while (top != -1 && stack[top] != '(') {
                postfix[j] = pop();
                j++;
            }
            if (top == -1) {
                printf("Error: Mismatched parentheses\n");
                return;
            }
            pop();
        } else {
            while (top != -1 && precedence(infix[i]) <= precedence(stack[top])) {
                postfix[j] = pop();
                j++;
            }
            push(infix[i]);
        }
    }
    while (top != -1) {
        if (stack[top] == '(') {
            printf("Error: Mismatched parentheses\n");
            return;
        }
        postfix[j] = pop();
        j++;
    }
    postfix[j] = '\0';
}
int main() {
    char infix[MAX_SIZE];
    char postfix[MAX_SIZE];
    printf("Enter an infix expression: ");
    scanf("%s", infix);
    infixToPostfix(infix, postfix);
    printf("Postfix expression: %s", postfix);
    return 0;
}
