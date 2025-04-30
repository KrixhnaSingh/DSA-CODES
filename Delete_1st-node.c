#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *prev, *next;
};

struct node *start = NULL;

void delete_first() {
    struct node *ptr;

    if (start == NULL) {
        printf("List is empty.\n");
        return;
    }

    ptr = start;
    start = start->next;

    if (start != NULL)
        start->prev = NULL;

    free(ptr);
}

int main() {
    delete_first();
    return 0;
}
