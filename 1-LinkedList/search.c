#include<stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

void findKey(struct Node *temp, int key) {

    while (temp!=NULL) {
        if (temp->data==key)
        {
            printf("Key found.");
            return;
        }
        temp = temp->next;
    }
    printf("Key not found");
}


int main () {

    // initializing nodes
    struct Node *head;
    struct Node *firstNode = NULL;
    struct Node *secondNode = NULL;
    struct Node *thirdNode = NULL;

    // memory allocation
    firstNode = malloc(sizeof(struct Node));
    secondNode = malloc(sizeof(struct Node));
    thirdNode = malloc(sizeof(struct Node));

    // assigning values
    firstNode->data = 1;
    secondNode->data = 2;
    thirdNode->data = 3;

    firstNode->next = secondNode;
    secondNode->next = thirdNode;
    thirdNode->next = NULL;

    head = firstNode;

    int key = 5;
    findKey(head, key);

    return 0;
}