#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;

    // Get the size of the array from the user
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    // Allocate memory for the integer array dynamically
    int* arr = (int*)malloc(n * sizeof(int));

    // Check if memory allocation was successful
    if (arr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    // Display the elements and their addresses
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; ++i) {
        scanf("%d", &arr[i]);
    }

    printf("Array elements and their addresses:\n");
    for (int i = 0; i < n; ++i) {
        printf("Element at index %d: %d (Address: %p)\n", i, arr[i], (void*)&arr[i]);
    }

    // Deallocate the dynamically allocated memory
    free(arr);

    return 0;
}
