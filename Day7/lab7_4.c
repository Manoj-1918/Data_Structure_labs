#include <stdio.h>
#include <stdlib.h>

// Define a node in the linked list
struct Node {
    int data;
    struct Node* next;
};

struct Node* front = NULL;
struct Node* rear = NULL;

// Function to check if the queue is empty
int isEmpty() {
    return front == NULL;
}

// Insert an element in the queue
void enqueue(int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    if (isEmpty()) {
        front = newNode;
        rear = newNode;
        rear->next = front; // Circular link
    } else {
        rear->next = newNode;
        rear = newNode;
        rear->next = front; // Maintain circular structure
    }
    printf("Inserted %d\n", value);
}

// Delete an element from the queue
void dequeue() {
    if (isEmpty()) {
        printf("Queue is empty, cannot dequeue.\n");
        return;
    }
    struct Node* temp = front;
    if (front == rear) {
        front = NULL;
        rear = NULL;
    } else {
        front = front->next;
        rear->next = front;
    }
    printf("Deleted %d\n", temp->data);
    free(temp);
}

// Display the elements in the queue
void display() {
    if (isEmpty()) {
        printf("Queue is empty.\n");
        return;
    }
    struct Node* temp = front;
    printf("Queue: ");
    do {
        printf("%d ", temp->data);
        temp = temp->next;
    } while (temp != front);
    printf("\n");
}

// Main menu-driven program
int main() {
    int choice, value;
    while (1) {
        printf("\n--- Circular Queue Menu ---\n");
        printf("1. Insert\n");
        printf("2. Delete\n");
        printf("3. Display\n");
        printf("4. Check if Empty\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("Enter value to insert: ");
                scanf("%d", &value);
                enqueue(value);
                break;
            case 2:
                dequeue();
                break;
            case 3:
                display();
                break;
            case 4:
                if (isEmpty())
                    printf("Queue is empty.\n");
                else
                    printf("Queue is not empty.\n");
                break;
            case 5:
                printf("Exiting...\n");
                exit(0);
            default:
                printf("Invalid choice, please try again.\n");
        }
    }
    return 0;
}
