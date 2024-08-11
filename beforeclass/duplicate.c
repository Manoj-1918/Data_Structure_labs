#include<stdio.h>

int main() {
    int arr[10] = {1, 2, 3, 5, 5, 5, 5, 5, 5, 7};
    int count = 0;
    int new_size = 10;

    // Printing original array
    printf("Original array:\n");
    for(int i = 0; i < 10; i++) {
        printf("%d\t", arr[i]);
    }
    printf("\n");

    // Removing duplicates
    for(int i = 0; i < new_size; i++) {
        for(int j = i + 1; j < new_size; j++) {
            if(arr[i] == arr[j]) {
                count++;
                // Shift elements to the left
                for(int k = j; k < new_size - 1; k++) {
                    arr[k] = arr[k + 1];
                }
                arr[new_size - 1] = 0;  // Set the last element to 0
                new_size--;  // Decrease the size of the array
                j--;  // Decrement j to check the new element at position j
            }
        }
    }

    // Printing array after removing duplicates
    printf("Array after removing duplicates:\n");
    for(int i = 0; i < 10-count; i++) {  // Print the whole array, including zeros
        printf("%d\t", arr[i]);
    }

    return 0;
}

