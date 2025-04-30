#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *start = NULL;

void insert_beg() {
    struct node *new_node, *ptr;
    int num;
    printf("Enter data: ");
    scanf("%d", &num);
    new_node = (struct node *)malloc(sizeof(struct node));
    new_node->data = num;

    if (start == NULL) {
        new_node->next = new_node;
        start = new_node;
    } else {
        ptr = start;
        while (ptr->next != start)
            ptr = ptr->next;
        ptr->next = new_node;
        new_node->next = start;
        start = new_node;
    }
}

int main() {
    insert_beg();
    return 0;
}
