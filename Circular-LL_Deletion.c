#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

void insertAtEnd(struct Node** head, int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    struct Node* temp = *head;
    newNode->data = data;
    if (*head == NULL) {
        *head = newNode;
        newNode->next = *head;
    } else {
        while (temp->next != *head) {
            temp = temp->next;
        }
        temp->next = newNode;
        newNode->next = *head;
    }
}

void delete(struct Node** head, int key) {
    struct Node *temp = *head, *prev = NULL;
    if (temp != NULL && temp->data == key) {
        if (*head == (*head)->next) {
            free(*head);
            *head = NULL;
            return;
        }
        prev = *head;
        while (temp->next != *head) {
            temp = temp->next;
        }
        prev->next = (*head)->next;
        free(*head);
        *head = prev->next;
        return;
    }
    while (temp->next != *head && temp->data != key) {
        prev = temp;
        temp = temp->next;
    }
    if (temp->data == key) {
        prev->next = temp->next;
        free(temp);
    }
}

void display(struct Node* head) {
    struct Node* temp = head;
    if (head != NULL) {
        do {
            printf("%d ", temp->data);
            temp = temp->next;
        } while (temp != head);
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
