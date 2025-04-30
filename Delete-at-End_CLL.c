#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *start = NULL;

void delete_end() {
    struct node *ptr, *preptr;
    if (start == NULL) {
        printf("List is empty.\n");
        return;
    }
    if (start->next == start) {
        free(start);
        start = NULL;
        return;
    }
    ptr = start;
    while (ptr->next != start) {
        preptr = ptr;
        ptr = ptr->next;
    }
    preptr->next = start;
    free(ptr);
}

int main() {
    delete_end();
    return 0;
}
