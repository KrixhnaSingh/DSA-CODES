#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *start = NULL;

void display() {
    struct node *ptr;
    if (start == NULL) {
        printf("List is empty.\n");
        return;
    }
    ptr = start;
    printf("List: ");
    do {
        printf("%d -> ", ptr->data);
        ptr = ptr->next;
    } while (ptr != start);
    printf("(head)\n");
}

int main() {
    display();
    return 0;
}
