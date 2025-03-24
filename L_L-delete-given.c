#include<stdio.h>
#include<stdlib.h>
struct slist{
    int value;
    struct slist *next;
} *start=NULL;
typedef struct slist node;

void create(){
    node *tmp, *tmp1;
    tmp=(node*)malloc(sizeof(node));
    if (tmp == NULL){
        printf("Memory allocation failed !");
    }
    printf("Enter the value for the new node: ");
    scanf("%d", &tmp->value);
    tmp->next=NULL;
    if (start==NULL){
        start=tmp;
    }
    else{
        tmp1=start;
        while (tmp1->next != NULL){
            tmp1=tmp1->next;
        }
        tmp1->next = tmp;
    }
}

void display(){
    node *tmp;
    tmp = start;
    if (tmp==NULL){
        printf("List is empty !!");
    }
    else {
        printf("Linked List: ");
        while (tmp != NULL){
        printf("%d ", tmp->value);
        tmp=tmp->next;
        }
        printf("\n");
    }
}

void delete() {
    int position, count=0, i;
    node *tmp, *tmp1;
    tmp=start;
    while(tmp!=NULL){
        count++;
        tmp=tmp->next;
    }
    printf("\nEnter the position from where you want to delete: ");
    scanf("%d", &position);
    if(position<1||position>count){
        printf("\nInvalid position !!");
    }
    else {
        if (position == 1){
            tmp=start;
            tmp1=tmp->next;
            start=tmp1;
            free (tmp);
            printf("\nDeletion completed !!");
        }
        else {
            tmp=start;
            for(i=0;i<position-1;i++){
                tmp=tmp->next;
            }
            tmp1=tmp->next;
            tmp->next=tmp1->next;
            free(tmp1);
            printf("\nDeletion completed!!");
        }
    }
}

int main() 
{
    int choice;
    while (1) {
        printf("\n1->For creating a new node \n2->For displaying list \n3->For deleting a node from a given position \n4->Exit \nEnter your choice: ");
        scanf("%d", &choice);
        if (choice == 1)
            create();
        else if (choice == 2)
            display();
        else if (choice == 3)
            delete();
        else if (choice == 4)
            break;
        else
            printf("Wrong choice entered !!\n");
    }
    return 0;
}
