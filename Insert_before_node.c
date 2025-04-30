#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *prev, *next;
};

struct node *start = NULL;

void insert_before() {
    int val;
    struct node *ptr, *new_node;

    printf("Enter value before which to insert: ");
    scanf("%d", &val);

    ptr = start;
    while (ptr != NULL && ptr->data != val)
        ptr = ptr->next;

    if (ptr == NULL) {
        printf("Value not found.\n");
        return;
    }

    new_node = (struct node *)malloc(sizeof(struct node));
    printf("Enter data: ");
    scanf("%d", &new_node->data);

    new_node->next = ptr;
    new_node->prev = ptr->prev;

    if (ptr->prev != NULL)
        ptr->prev->next = new_node;
    else
        start = new_node;

    ptr->prev = new_node;
}

int main() {
    insert_before();
    return 0;
}
