#include<stdio.h>
#include<stdlib.h>

struct Node {
    int data;
    struct Node *prev, *next;
} *head, *tail, *temp, *new_node;

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

void insertAtStart(int data) {
    new_node = (struct Node*)malloc(sizeof(struct Node));
    new_node->data = data;
    new_node->prev = NULL;
    new_node->next = head;
    
    if (head != NULL) {
        head->prev = new_node;
    }
    
    head = new_node;
    
    if (tail == NULL) {
        tail = head;
    }
}

void insertAtEnd(int data) {
    addData(data);  // Since addData already inserts at the end, reuse it
}

void insertAt(int pos, int data) {
    if (pos <= 1) {
        insertAtStart(data);
        return;
    }

    new_node = (struct Node*)malloc(sizeof(struct Node));
    new_node->data = data;

    temp = head;
    for (int i = 1; i < pos - 1 && temp != NULL; i++) {
        temp = temp->next;
    }

    if (temp == NULL || temp->next == NULL) {
        insertAtEnd(data);
    } else {
        new_node->next = temp->next;
        new_node->prev = temp;
        temp->next->prev = new_node;
        temp->next = new_node;
    }
}

int search(int item) {
    temp = head;
    int loc = 1;

    while (temp != NULL) {
        if (temp->data == item) {
            return loc;
        }
        temp = temp->next;
        loc++;
    }
    return 0;  // Item not found
}

int countNode() {
    int count = 0;
    temp = head;

    while (temp != NULL) {
        count++;
        temp = temp->next;
    }
    return count;
}

void deleteAt(int pos) {
    if (head == NULL) {
        printf("No nodes are present in the list.\n");
        return;
    }

    if (pos <= 1) {
        temp = head;
        head = head->next;

        if (head != NULL) {
            head->prev = NULL;
        }

        if (tail == temp) {
            tail = NULL;
        }

        free(temp);
        return;
    }

    temp = head;
    for (int i = 1; i < pos && temp != NULL; i++) {
        temp = temp->next;
    }

    if (temp == NULL) {
        printf("Position out of bounds.\n");
        return;
    }

    if (temp->next != NULL) {
        temp->next->prev = temp->prev;
    }

    if (temp->prev != NULL) {
        temp->prev->next = temp->next;
    }

    if (temp == tail) {
        tail = temp->prev;
    }

    free(temp);
}

void selectDelete(int key) {
    temp = head;

    while (temp != NULL) {
        if (temp->data == key) {
            if (temp == head) {
                head = temp->next;
            }
            if (temp == tail) {
                tail = temp->prev;
            }
            if (temp->prev != NULL) {
                temp->prev->next = temp->next;
            }
            if (temp->next != NULL) {
                temp->next->prev = temp->prev;
            }
            free(temp);
            printf("Node with key %d deleted.\n", key);
            return;
        }
        temp = temp->next;
    }

    printf("Key %d not found in the list.\n", key);
}

int main() {
    int n, data, choice;
    int c = 1;

    head = NULL;
    temp = NULL;

    while (c) {
        printf("\nOperations available:\n");
        printf("1. Add Info\n");
        printf("2. Forward Traversal\n");
        printf("3. Backward Traversal\n");
        printf("4. Check if the list is empty\n");
        printf("5. Insert at any position\n");
        printf("6. Delete a node at any position\n");
        printf("7. Delete the node with a given key\n");
        printf("8. Count the number of nodes\n");
        printf("9. Search for an element\n");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: {
                printf("Enter how many nodes you want to create: ");
                scanf("%d", &n);
                for (int i = 0; i < n; i++) {
                    printf("Enter the data to store: ");
                    scanf("%d", &data);
                    addData(data);
                }
                break;
            }
            case 2: {
                forwardDisplay();
                break;
            }
            case 3: {
                backwardDisplay();
                break;
            }
            case 4: {
                if (!countNode())
                    printf("\nThe list is empty.\n");
                else
                    printf("\nThe list is not empty.\n");
                break;
            }
            case 5: {
                int pos = -1;
                printf("Enter the data: ");
                scanf("%d", &data);
                printf("Enter the position to insert: ");
                scanf("%d", &pos);
                insertAt(pos, data);
                break;
            }
            case 6: {
                int pos;
                printf("Enter the position to delete: ");
                scanf("%d", &pos);
                deleteAt(pos);
                break;
            }
            case 7: {
                int key;
                printf("Enter the key to delete: ");
                scanf("%d", &key);
                selectDelete(key);
                break;
            }
            case 8: {
                printf("The number of nodes in the linked list is: %d\n", countNode());
                break;
            }
            case 9: {
                int item = 0;
                printf("Enter the item to search: ");
                scanf("%d", &item);
                int position = search(item);
                if (position > 0)
                    printf("The element is found at position %d\n", position);
                else
                    printf("Element not found.\n");
                break;
            }
            default: {
                printf("Invalid choice. Please try again.\n");
                break;
            }
        }

        printf("\nPress 1 to continue with list operations and 0 to end the program: ");
        scanf("%d", &c);
    }

    return 0;
}
