#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

// inserting function / push function
void push(int data, struct Node **top)
{
    struct Node *newNode;
    newNode = malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;

    if (top!=NULL)
    {
        newNode->next = *top;
        *top = newNode;
    }
    else
    {
        *top = newNode;
    }
}

void showStack (struct Node *temp)
{
    while (temp!=NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
}

int main () {

    struct Node *top = NULL;

    push(2, &top);
    push(3, &top);
    push(4, &top);
    push(5, &top);

    struct Node *temp = top;
    showStack(temp);
    return 0;
}