#include <stdio.h>
#define X 10

int queue[X];
int front = -1;
int rear = -1;

void enqueue() {
    if (rear == X - 1) {
        printf("\nQueue Overflow !!\n");
        return;
    }
    int num;
    printf("Enter the value to enqueue: ");
    scanf("%d", &num);

    if (front == -1 && rear == -1) {
        front = rear = 0;
    } else {
        rear++;
    }
    queue[rear] = num;
    printf("Enqueued %d successfully !!\n", num);
}

void dequeue() {
    if (front == -1 && rear == -1) {
        printf("\nUNDERFLOW !!\n");
        return;
    }
    printf("\nDequeued: %d\n", queue[front]);
    front++;
}

void display() {
    if (front == -1 && rear == -1) {
        printf("\nQueue is empty.\n");
        return;
    }

    printf("\nQueue elements: ");
    for (int i = front; i <= rear; i++) {
        printf("%d ", queue[i]);
    }
    printf("\n");
}

int main() {
    int choice;
    while (1) {
        printf("\nQueue Operations:");
        printf("\n1 -> Enqueue");
        printf("\n2 -> Dequeue");
        printf("\n3 -> Display Queue");
        printf("\n4 -> Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);
    
        if (choice == 1) {
                enqueue();
        }
            else if (choice == 2) {
                dequeue();
            }
            else if (choice == 3) {
                display();
            }
            else if (choice == 4) {
                printf("Exiting!\n");
                return 0;
            } else {
                printf("Invalid choice! Try again.\n");
            }
        }
        printf("\n");
    
        return 0;
    }
    