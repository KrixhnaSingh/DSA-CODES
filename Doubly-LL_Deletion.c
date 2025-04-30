#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
    struct Node* prev;
};

void insertAtEnd(struct Node** head, int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    struct Node* temp = *head;
    newNode->data = data;
    newNode->next = NULL;
    if (*head == NULL) {
        newNode->prev = NULL;
        *head = newNode;
    } else {
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
        newNode->prev = temp;
    }
}

void delete(struct Node** head, int key) {
    struct Node* temp = *head;
    if (*head != NULL && temp->data == key) {
        if (temp->next != NULL) {
            *head = temp->next;
            (*head)->prev = NULL;
        } else {
            *head = NULL;
        }
        free(temp);
        return;
    }
    while (temp != NULL && temp->data != key) {
        temp = temp->next;
    }
    if (temp != NULL) {
        if (temp->next != NULL) {
            temp->next->prev = temp->prev;
        }
        if (temp->prev != NULL) {
            temp->prev->next = temp->next;
        }
        free(temp);
    }
}

void display(struct Node* head) {
    struct Node* temp = head;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
}

int main() {
    struct Node* head = NULL;
    insertAtEnd(&head, 10);
    insertAtEnd(&head, 20);
    insertAtEnd(&head, 30);
    display(head);
    delete(&head, 20);
    printf("\nAfter deletion:\n");
    display(head);
    return 0;
}
