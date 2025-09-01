// stack using linked list

#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node *next;
}node;

node *head = NULL;
node *tail = NULL;

void push(int value) {
    node *newNode = (node *)malloc(sizeof(node));
    newNode->data = value;
    newNode->next = NULL;

    if (head == NULL) {
        head = newNode;
        tail = newNode;
    } else {
        tail->next = newNode;
        tail = newNode;
    }
}

int pop() {
    if (head == NULL) {
        printf("Stack underflow\n");
        return -1;
    } else {
        int value = head->data;
        node *temp = head;
        head = head->next;
        free(temp);
        return value;
    }
}
