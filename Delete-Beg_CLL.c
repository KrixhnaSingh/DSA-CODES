#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *start = NULL;

void delete_beg() {
    struct node *ptr;
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
    while (ptr->next != start)
        ptr = ptr->next;
    ptr->next = start->next;
    free(start);
    start = ptr->next;
}

int main() {
    delete_beg();
    return 0;
}
