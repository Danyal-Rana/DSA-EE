#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct Node {
    int data;
    struct Node *next;
};

// Inserting function / push function
void push(int data, struct Node **top) {
    struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));
    if (!newNode) { // Memory allocation failed
        printf("Stack Overflow: Unable to allocate memory.\n");
        return;
    }
    
    newNode->data = data;
    newNode->next = *top;
    *top = newNode;
}

// Whether the stack is full or not (checks if memory can be allocated)
bool isFull() {
    struct Node *temp = (struct Node*)malloc(sizeof(struct Node));
    if (temp) {
        free(temp); // If allocated, free it and return false (not full)
        return false;
    }
    return true; // If allocation fails, stack is considered full
}

// Display the stack
void showStack(struct Node *temp) {
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main() {
    struct Node *top = NULL;

    bool a = isFull();
    if (a) {
        printf("Stack is Full\n");
    } else {
        printf("Stack is Not full.\n");
    }

    push(2, &top);
    push(3, &top);
    push(4, &top);
    push(5, &top);

    printf("Stack elements: ");
    showStack(top);

    a = isFull();
    if (a) {
        printf("Stack is Full\n");
    } else {
        printf("Stack is Not full.\n");
    }

    return 0;
}