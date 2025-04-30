#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *prev, *next;
};

struct node *start = NULL;

void insert_beg() {
    struct node *new_node;
    int num;

    printf("Enter data: ");
    scanf("%d", &num);

    new_node = (struct node *)malloc(sizeof(struct node));
    new_node->data = num;
    new_node->prev = NULL;
    new_node->next = start;

    if (start != NULL)
        start->prev = new_node;

    start = new_node;
}

int main() {
    insert_beg();
    return 0;
}
