#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *prev, *next;
};

struct node *start = NULL;

void delete_after() {
    int val;
    struct node *ptr, *temp;

    printf("Enter value after which node is to be deleted: ");
    scanf("%d", &val);

    ptr = start;
    while (ptr != NULL && ptr->data != val)
        ptr = ptr->next;

    if (ptr == NULL || ptr->next == NULL) {
        printf("Deletion not possible.\n");
        return;
    }

    temp = ptr->next;
    ptr->next = temp->next;

    if (temp->next != NULL)
        temp->next->prev = ptr;

    free(temp);
}

int main() {
    delete_after();
    return 0;
}
