#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *start = NULL;

void delete_entire_list() {
    struct node *ptr = start, *temp;

    if (start == NULL) {
        printf("List is already empty.\n");
        return;
    }

    while (ptr->next != start) {
        temp = ptr->next;
        ptr->next = temp->next;
        free(temp);
    }
    free(start);
    start = NULL;
    printf("Entire list deleted.\n");
}

int main() {
    delete_entire_list();
    return 0;
}
