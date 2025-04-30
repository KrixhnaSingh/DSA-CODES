#include <stdio.h>
#include <stdlib.h>

struct Btnode {
    int data;
    struct Btnode *left;
    struct Btnode *right;
};

struct Btnode* newNode(int data) {
    struct Btnode* node = (struct Btnode*)malloc(sizeof(struct Btnode));
    node->data = data;
    node->left = node->right = NULL;
    return node;
}

int StrictBT(struct Btnode* P) {
    if (P == NULL) {
        return 1;
    } else {
        if (P->left == NULL && P->right == NULL) {
            return 1;
        } 
        else if (P->left != NULL && P->right != NULL) {
            return StrictBT(P->left) && StrictBT(P->right);
        } else {
            return 0;
        }
    }
}

int main() {
    struct Btnode *root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);

    if (StrictBT(root)) {
        printf("The tree is a strict binary tree.\n");
    } else {
        printf("The tree is not a strict binary tree.\n");
    }

    return 0;
}
