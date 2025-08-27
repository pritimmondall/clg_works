// Write a program to convert a string into a linked list of characters and display it.

#include <stdio.h>
#include <stdlib.h>

struct Node{
    char data;
    struct Node* next;
};

struct Node *head = NULL;
struct Node *tail = NULL;

void createListFromString(const char *str) {
    for (int i = 0; str[i] != '\0'; i++) {
        struct Node *newNode = malloc(sizeof(struct Node));
        newNode->data = str[i];
        newNode->next = NULL;
        if (head == NULL) {
            head = tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }
}

void display() {
    struct Node *temp = head;
    while (temp != NULL) {
        printf("%c ", temp->data);
        temp = temp->next;
    }
}

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf(" %[^\n]", str); // Read a line including spaces
    createListFromString(str);
    display();
    return 0;
}