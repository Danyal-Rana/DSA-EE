#include<stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

void printLinkedList(struct Node *temp) {
    while (temp!=NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
}

void insertInBetween(int data, int target, struct Node *temp) {

    struct Node *newNode;
    newNode = malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;

    while (temp->data != 17) {
        temp = temp->next;
    }

    struct Node *t = temp->next;
    temp->next = newNode;
    newNode->next = t;    
}

int main () {

    // initializing nodes
    struct Node *head;
    struct Node *firstNode = NULL;
    struct Node *secondNode = NULL;
    struct Node *thirdNode = NULL;
    struct Node *fourthNode = NULL;

    // memory allocation
    firstNode = malloc(sizeof(struct Node));
    secondNode = malloc(sizeof(struct Node));
    thirdNode = malloc(sizeof(struct Node));
    fourthNode = malloc(sizeof(struct Node));

    // assigning values
    firstNode->data = 5;
    secondNode->data = 16;
    thirdNode->data = 17;
    fourthNode->data = 23;

    firstNode->next = secondNode;
    secondNode->next = thirdNode;
    thirdNode->next = fourthNode;
    fourthNode->next = NULL;

    head = firstNode;

    printLinkedList(head);

    insertInBetween(18, 17, firstNode);
    printf("\n");

    printLinkedList(head);

    return 0;
}