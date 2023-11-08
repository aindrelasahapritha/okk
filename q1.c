#include <stdio.h>

int main() {
    // Declare the first array
    int arr1[] = {1, 2, 3, 4, 5};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);

    // Declare the second array
    int arr2[] = {6, 7, 8, 9, 10};
    int size2 = sizeof(arr2) / sizeof(arr2[0]);

    // Calculate the size of the merged array
    int size_merged = size1 + size2;

    // Declare and initialize the merged array with both arrays
    int mergedArray[size_merged];
    for (int i = 0; i < size1; i++) {
        mergedArray[i] = arr1[i];
    }
    for (int i = 0; i < size2; i++) {
        mergedArray[size1 + i] = arr2[i];
    }

    // Print the original arrays and the merged array
    printf("Array 1: ");
    for (int i = 0; i < size1; i++) {
        printf("%d ", arr1[i]);
    }

    printf("\nArray 2: ");
    for (int i = 0; i < size2; i++) {
        printf("%d ", arr2[i]);
    }

    printf("\nMerged Array: ");
    for (int i = 0; i < size_merged; i++) {
        printf("%d ", mergedArray[i]);
    }



    return 0;
}
