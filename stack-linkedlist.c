#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
} *top = NULL;
typedef struct Node node;

void push(int value) {
    node *tmp;
    tmp = (node*)malloc(sizeof(node));
    if (tmp == NULL) {
        printf("\nMemory Overflow! Stack is full.\n");
        return;
    }
    tmp->data = value;
    tmp->next = top;
    top = tmp;
    printf("\nPushed %d into the stack.\n", value);
}


int pop() {
    if (top == NULL) {
        printf("\nStack Underflow! Stack is empty.\n");
        return -1;
    }
    node* temp;
    temp=top;
    int poppedValue = temp->data;
    top = top->next;
    free(temp);
    printf("\nPopped %d from the stack.\n", poppedValue);
    return poppedValue;
}


void peek() {
    if (top == NULL) {
        printf("\nStack is empty!\n");
    } else {
        printf("\nTop element: %d\n", top->data);
    }
}


void display() {
    if (top == NULL) {
        printf("\nStack is empty!\n");
        return;
    }
    node* temp = top;
    printf("\nStack elements: ");
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}


int main() {
    int choice, value;
    
    while (1) {
        printf("\nStack Operations using Linked List:");
        printf("\n1 -> Push");
        printf("\n2 -> Pop");
        printf("\n3 -> Peek");
        printf("\n4 -> Display");
        printf("\n5 -> Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            printf("Enter value to push: ");
            scanf("%d", &value);
            push(value);
        } 
        else if (choice == 2) {
            pop();
        }
        else if (choice == 3) {
            peek();
        }
        else if (choice == 4) {
            display();
        }
        else if (choice == 5) {
            printf("\nExiting program!\n");
            return 0;
        } 
        else {
            printf("\nInvalid choice! Try again.\n");
        }
    }

    return 0;
}
