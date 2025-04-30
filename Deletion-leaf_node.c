#include <stdio.h>
#include <stdlib.h>

struct Btnode {
    int data;
    struct Btnode* left;
    struct Btnode* right;
};

struct Btnode* newNode(int data) {
    struct Btnode* node = (struct Btnode*)malloc(sizeof(struct Btnode));
    node->data = data;
    node->left = node->right = NULL;
    return node;
}

struct Btnode* deleteLeafNode(struct Btnode* root, int key) {
    if (root == NULL) {
        return root;
    }

    if (key < root->data) {
        root->left = deleteLeafNode(root->left, key);
    } else if (key > root->data) {
        root->right = deleteLeafNode(root->right, key);
    } else {
        if (root->left == NULL && root->right == NULL) {
            free(root);
            return NULL;
        }
    }
    return root;
}

void inorder(struct Btnode* root) {
    if (root != NULL) {
        inorder(root->left);
        printf("%d ", root->data);
        inorder(root->right);
    }
}

int main() {
    struct Btnode* root = newNode(50);
    root->left = newNode(30);
    root->right = newNode(70);
    root->left->left = newNode(20);
    root->left->right = newNode(40);

    printf("Inorder traversal before deletion: \n");
    inorder(root);
    printf("\n");

    root = deleteLeafNode(root, 20);
    printf("Inorder traversal after deletion of leaf node 20: \n");
    inorder(root);
    printf("\n");

    return 0;
}
