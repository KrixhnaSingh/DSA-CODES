#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *prev, *next;
};

struct node *start = NULL;

void delete_before() {
    int val;
    struct node *ptr, *temp;

    printf("Enter value before which node is to be deleted: ");
    scanf("%d", &val);

    ptr = start;
    while (ptr != NULL && ptr->data != val)
        ptr = ptr->next;

    if (ptr == NULL || ptr->prev == NULL) {
        printf("Deletion not possible.\n");
        return;
    }

    temp = ptr->prev;

    if (temp->prev != NULL)
        temp->prev->next = ptr;
    else
        start = ptr;

    ptr->prev = temp->prev;

    free(temp);
}

int main() {
    delete_before();
    return 0;
}
