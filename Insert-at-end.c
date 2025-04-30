#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *prev, *next;
};

struct node *start = NULL;

void insert_end() {
    struct node *new_node, *ptr;
    int num;

    printf("Enter data: ");
    scanf("%d", &num);

    new_node = (struct node *)malloc(sizeof(struct node));
    new_node->data = num;
    new_node->next = NULL;

    if (start == NULL) {
        new_node->prev = NULL;
        start = new_node;
    } else {
        ptr = start;
        while (ptr->next != NULL)
            ptr = ptr->next;

        ptr->next = new_node;
        new_node->prev = ptr;
    }
}

int main() {
    insert_end();
    return 0;
}
