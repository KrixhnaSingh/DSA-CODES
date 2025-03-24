#include<stdio.h>
#define MAX 10

int stack[10];
int top=-1;

void push(){
    int value;
    printf("Enter the value you want to enter: ");
    scanf("%d", &value);
    if (top==MAX-1){
        printf("\nOVERFLOW !!!\n");
    }
    else {
        top++;
        stack[top]=value;
    }
}

int pop() {
    int value;
    if (top == -1) {
        printf("\nStack Underflow !!\n");
    }
    else {
        value = stack[top];
        top--;
        printf("\nPopped %d from the stack !!\n", value);
    }
}

void peek() {
    if (top==-1){
        printf("\nStack is empty !!\n");
    }
    else {
        printf("%d ", stack[top]);
    }
}

void display() {
    if (top == -1) {
        printf("\nStack is empty !!\n");
    } else {
        printf("\nStack elements: ");
        for (int i=top; i>-1; i--) {
            printf("%d ", stack[i]);
        }
        printf("\n");
    }
}

int main() {
    int choice, value;

    while (1) {
        printf("\nStack Operations:");
        printf("\n1 -> Push");
        printf("\n2 -> Pop");
        printf("\n3 -> Peek");
        printf("\n4 -> Display");
        printf("\n5 -> Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            push();
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
            printf("Exiting!\n");
            return 0;
        } else {
            printf("Invalid choice! Try again.\n");
        }
    }
    printf("\n");

    return 0;
}
