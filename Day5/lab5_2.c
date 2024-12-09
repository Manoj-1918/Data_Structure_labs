#include<stdio.h>
#include<stdlib.h>

struct Node {
    int data;
    struct Node *prev, *next;
} *head = NULL, *tail = NULL, *temp = NULL, *new_node = NULL;

void addData(int data) {
    new_node = (struct Node*)malloc(sizeof(struct Node));
    new_node->data = data;
    new_node->next = NULL;
    new_node->prev = NULL;
    
    if (head == NULL) {
        head = new_node;
        tail = new_node;
    } else {
        tail->next = new_node;
        new_node->prev = tail;
        tail = new_node;
    }
}

void forwardDisplay() {
    temp = head;
    while (temp != NULL) {
        printf("%d\tNext: %p\tPrev: %p\n", temp->data, temp->next, temp->prev);
        temp = temp->next;
    }
}

void backwardDisplay() {
    temp = tail;
    while (temp != NULL) {
        printf("%d\n", temp->data);
        temp = temp->prev;
    }
}

void reverse() {
    struct Node *current = head;
    struct Node *tempNode = NULL;

    while (current != NULL) {
        tempNode = current->prev;
        current->prev = current->next;
        current->next = tempNode;
        current = current->prev;
    }

    if (tempNode != NULL) {
        head = tempNode->prev;
    }

    // Swap head and tail
    tempNode = head;
    head = tail;
    tail = tempNode;

    printf("List has been reversed.\n");
}

int main() {
    int n = 0, data;
    printf("\t\tProgram to create, display and reverse a doubly linked list\n");
    printf("Enter how many nodes you want to create: ");
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++) {
        printf("Enter the data to store: ");
        scanf("%d", &data);
        addData(data);
    }

    printf("\nForward display:\n");
    forwardDisplay();

    printf("\nBackward display:\n");
    backwardDisplay();

    reverse();

    printf("\nForward display after reverse:\n");
    forwardDisplay();

    return 0;
}
