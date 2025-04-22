#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* left;
    struct node* right;
};


struct node* createNode(int data) {
    struct node* tmp = (struct node*)malloc(sizeof(struct node));
    tmp->data = data;
    tmp->left = NULL;
    tmp->right = NULL;
    return tmp;
}


void preorder(struct node* root) {
    if (root != NULL) {
        printf("%d ", root->data);
        preorder(root->left);
        preorder(root->right);
    }
}


void postorder(struct node* root) {
    if (root != NULL) {
        preorder(root->left);
        preorder(root->right);
        printf("%d ", root->data);
        }
}

void inorder(struct node* root) {
    if (root != NULL) {
        preorder(root->left);
        printf("%d ", root->data);
        preorder(root->right);
        }
}


struct node* buildTree() {
    int data;
    printf("Enter data (-1 for NULL): ");
    scanf("%d", &data);

    if (data == -1)
        return NULL;

    struct node* root = createNode(data);

    printf("Enter left child of %d\n", data);
    root->left = buildTree();

    printf("Enter right child of %d\n", data);
    root->right = buildTree();

    return root;
}


int main() {
    printf("Build the binary tree:\n");
    struct node* root = buildTree();

    printf("\nPreorder traversal: ");
    preorder(root);
    printf("\n");

    printf("\nPostorder traversal: ");
    postorder(root);
    printf("\n");

    printf("\nInorder traversal: ");
    inorder(root);
    printf("\n");


    return 0;
}


