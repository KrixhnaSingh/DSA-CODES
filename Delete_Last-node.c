#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *prev, *next;
};

struct node *start = NULL;

void delete_last() {
    struct node *ptr;

    if (start == NULL) {
        printf("List is empty.\n");
        return;
    }

    ptr = start;
    while (ptr->next != NULL)
        ptr = ptr->next;

    if (ptr->prev != NULL)
        ptr->prev->next = NULL;
    else
        start = NULL;

    free(ptr);
}

int main() {
    delete_last();
    return 0;
}
