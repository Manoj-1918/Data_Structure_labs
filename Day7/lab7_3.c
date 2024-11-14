#include <stdio.h>
#include <stdlib.h>

#define MAX 5  // Define the maximum size of the circular queue

int queue[MAX];   // Array to implement the queue
int front = -1, rear = -1;  // Initial front and rear

// Function to check if the queue is empty
int isEmpty() {
    return (front == -1);
}

// Function to check if the queue is full
int isFull() {
    return ((rear + 1) % MAX == front);
}

// Function to insert an element in the circular queue
void insert(int element) {
    if (isFull()) {
        printf("Queue is Full! Cannot insert element.\n");
    } else {
        if (front == -1) front = 0;  // Set front to 0 if inserting the first element
        rear = (rear + 1) % MAX;  // Increment rear in a circular manner
        queue[rear] = element;  // Insert the element
        printf("Inserted %d into the queue.\n", element);
    }
}

// Function to delete an element from the circular queue
void delete() {
    if (isEmpty()) {
        printf("Queue is Empty! Cannot delete element.\n");
    } else {
        printf("Deleted %d from the queue.\n", queue[front]);
        if (front == rear) {  // If only one element was present
            front = rear = -1;  // Reset the queue
        } else {
            front = (front + 1) % MAX;  // Increment front in a circular manner
        }
    }
}

// Function to display the elements in the circular queue
void display() {
    if (isEmpty()) {
        printf("Queue is Empty!\n");
    } else {
        printf("Queue elements are: ");
        int i = front;
        while (i != rear) {
            printf("%d ", queue[i]);
            i = (i + 1) % MAX;
        }
        printf("%d\n", queue[rear]);  // Print the last element
    }
}

int main() {
    int choice, element;
    while (1) {
        printf("\nCircular Queue Operations:\n");
        printf("1. Insert\n");
        printf("2. Delete\n");
        printf("3. Display\n");
        printf("4. Check if Queue is Empty\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter the element to insert: ");
                scanf("%d", &element);
                insert(element);
                break;
            case 2:
                delete();
                break;
            case 3:
                display();
                break;
            case 4:
                if (isEmpty())
                    printf("Queue is Empty!\n");
                else
                    printf("Queue is not Empty.\n");
                break;
            case 5:
                exit(0);
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }

    return 0;
}
