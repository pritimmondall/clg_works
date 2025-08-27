// write a program to collect height and weight of N students. Find the maximum weight/height ratio of each student and display using linked list.



#include<stdio.h>
#include<stdlib.h>

struct Node1{
    float height;
    struct Node1* next;
};

struct Node2{
    float weight;
    struct Node2* next; 
};

struct Node1 *head1 = NULL, *tail1 = NULL;
struct Node2 *head2 = NULL, *tail2 = NULL;

void createList1(int n){
    float data;
    for(int i=0; i<n; i++){
        struct Node1 * newNode = malloc(sizeof(struct Node1));
        printf("enter height of student %d: ", i+1);
        scanf("%f", &data);
        newNode->height = data;
        newNode->next = NULL;
        if(head1 == NULL){
            head1 = tail1 = newNode;
        }else{
            tail1->next = newNode;
            tail1 = newNode;
        }
    }

}

void createList2(int n){
    float data;
    for(int i=0; i<n; i++){
        struct Node2 * newNode = malloc(sizeof(struct Node2));
        printf("enter weight of student %d: ", i+1);
        scanf("%f", &data);
        newNode->weight = data;
        newNode->next = NULL;
        if(head2 == NULL){
            head2 = tail2 = newNode;
        }else{
            tail2->next = newNode;
            tail2 = newNode;
        }
    }

}

void displayRatio(int n){
    struct Node1 *temp1 = head1;
    struct Node2 *temp2 = head2;
    float max_ratio = -1.0;
    int max_index = -1;
    printf("Height to Weight ratio of each student:\n");
    for(int i=0; i<n; i++){
        if(temp1 != NULL && temp2 != NULL){
            float ratio = temp2->weight / temp1->height;
            printf("Student %d: %.2f\n", i+1, ratio);
            if(ratio > max_ratio){
                max_ratio = ratio;
                max_index = i+1;
            }
            temp1 = temp1->next;
            temp2 = temp2->next;
        }
    }
    if(max_index != -1){
        printf("Maximum weight/height ratio is %.2f (Student %d)\n", max_ratio, max_index);
    }
}


int main(){
    int n;
    printf("Enter the number of students: ");
    scanf("%d", &n);
    createList1(n);
    createList2(n);
    displayRatio(n);
    return 0;
}

