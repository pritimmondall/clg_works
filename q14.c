// write a program to perform modification of an element/node in linked list

#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *head = NULL;
struct node *tail = NULL;

void create(int val) {
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = val;
    newnode->next = NULL;
    if(head == NULL) {
        head = newnode;
        tail = newnode;
    } else {
        tail->next = newnode;
        tail = newnode;
    }
}

void display() {
    struct node *temp = head;
    if(head == NULL) {
        printf("List is empty\n");
    } else {
        while(temp != NULL) {
            printf("%d -> ", temp->data);
            temp = temp->next;
        }
        printf("NULL\n");
    }
}

void deleteFirst(){
    struct node *temp = head;
    if(head == NULL) {
        printf("List is empty\n");
    } else {
        head = head->next;
        free(temp);
    }
}

void modify(int old_val, int new_val) {
    struct node *temp = head;
    int found = 0;
    while(temp != NULL) {
        if(temp->data == old_val) {
            temp->data = new_val;
            found = 1;
            break;
        }
        temp = temp->next;
    }
    if(!found) {
        printf("Value %d not found in the list.\n", old_val);
    } else {
        printf("Value %d modified to %d.\n", old_val, new_val);
    }
}

int main() {
    int choice, val, old_val, new_val;
    while(1) {
        printf("1. Create Node\n");
        printf("2. Display List\n");
        printf("3. Modify Node\n");
        printf("4. Exit\n");
        printf("5. Delete First Node\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch(choice) {
            case 1:
                printf("Enter value to insert: ");
                scanf("%d", &val);
                create(val);
                break;
            case 2:
                display();
                break;
            case 3:
                printf("Enter value to modify: ");
                scanf("%d", &old_val);
                printf("Enter new value: ");
                scanf("%d", &new_val);
                modify(old_val, new_val);
                break;
            case 4:
                exit(0);
            case 5:
                deleteFirst();
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
    return 0;
}
