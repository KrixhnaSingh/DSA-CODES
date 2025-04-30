#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *prev, *next;
};

struct node *start = NULL;

void insert_after() {
    int val;
    struct node *ptr, *new_node;
    printf("Enter value after which to insert: ");
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

    new_node->next = ptr->next;
    new_node->prev = ptr;

    if (ptr->next != NULL)
        ptr->next->prev = new_node;

    ptr->next = new_node;
}

int main() {
    insert_after();
    return 0;
}
