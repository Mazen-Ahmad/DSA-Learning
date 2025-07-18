#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* left;
    struct node* right;
};

struct node* createNode(int data) {
    struct node* newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

struct node* insertNode(struct node* root, int data) {
    if (root == NULL) {
        root = createNode(data);
    }
    else if (data < root->data) {
        root->left = insertNode(root->left, data);
    }
    else {
        root->right = insertNode(root->right, data);
    }
    return root;
}

struct node* deleteLeafNode(struct node* root, int data) {
    if (root == NULL) {
        return root;
    }
    else if (data < root->data) {
        root->left = deleteLeafNode(root->left, data);
    }
    else if (data > root->data) {
        root->right = deleteLeafNode(root->right, data);
    }
    else {
        if (root->left == NULL && root->right == NULL) {
            free(root);
            root = NULL;
        }
        else {
            printf("Error: The node with data %d is not a leaf node.\n", data);
        }
    }
    return root;
}

struct node* minValueNode(struct node* node) {
    struct node* current = node;
    while (current && current->left != NULL) {
        current = current->left;
    }
    return current;
}

struct node* deleteOneChildNode(struct node* root, int data) {
    if (root == NULL) {
        return root;
    }
    else if (data < root->data) {
        root->left = deleteOneChildNode(root->left, data);
    }
    else if (data > root->data) {
        root->right = deleteOneChildNode(root->right, data);
    }
    else {
        if (root->left == NULL) {
            struct node* temp = root->right;
            free(root);
            return temp;
        }
        else if (root->right == NULL) {
            struct node* temp = root->left;
            free(root);
            return temp;
        }
        else {
            struct node* temp = minValueNode(root->right);
            root->data = temp->data;
            root->right = deleteOneChildNode(root->right, temp->data);
        }
    }
    return root;
}

struct node* deleteTwoChildrenNode(struct node* root, int data) {
    if (root == NULL) {
        return root;
    }
    else if (data < root->data) {
        root->left = deleteTwoChildrenNode(root->left, data);
    }
    else if (data > root->data) {
        root->right = deleteTwoChildrenNode(root->right, data);
    }
    else {
        struct node* temp = minValueNode(root->right);
        root->data = temp->data;
        root->right = deleteTwoChildrenNode(root->right, temp->data);
    }
    return root;
}

struct node* searchNode(struct node* root, int data) {
    if (root == NULL || root->data == data) {
        return root;
    }
    else if (data < root->data) {
        return searchNode(root->left, data);
    }
    else {
        return searchNode(root->right, data);
    }
}

void inorderTraversal(struct node* root) {
    if (root != NULL) {
        inorderTraversal(root->left);
        printf("%d ", root->data);
        inorderTraversal(root->right);
    }
}

int main() {
    struct node* root = NULL;

    // insert nodes
    root = insertNode(root, 50);
    insertNode(root, 30);
    insertNode(root, 20);
    insertNode(root, 40);
    insertNode(root, 70);
    insertNode(root, 60);
    insertNode(root, 80);

    // print the inorder traversal of the tree
    printf("Inorder traversal of the binary search tree:\n");
    inorderTraversal(root);
    printf("\n");

    // delete leaf nodes
    printf("Deleting leaf nodes with values 20 and 40:\n");
    root = deleteLeafNode(root, 20);
    root = deleteLeafNode(root, 40);
    inorderTraversal(root);
    printf("\n");

    // delete nodes with one child
    printf("Deleting nodes with one child with value 30:\n");
    root = deleteOneChildNode(root, 30);
    inorderTraversal(root);
    printf("\n");

    // delete nodes with two children
    printf("Deleting nodes with two children with value 50:\n");
    root = deleteTwoChildrenNode(root, 50);
    inorderTraversal(root);
    printf("\n");

    // search for a node
    printf("Searching for a node with value 60:\n");
    struct node* result = searchNode(root, 60);
    if (result != NULL) {
        printf("Found %d\n", result->data);
    }
    else {
        printf("Not found.\n");
    }

    return 0;
}
