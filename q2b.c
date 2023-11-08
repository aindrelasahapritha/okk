#include <stdio.h>

int displayArray(int arr[], int size) {
    printf("Array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int insertElement(int arr[], int *size, int position, int element) {
    if (position < 0 || position > *size) {
        printf("Invalid position for insertion!\n");
        return 0;
    }

    for (int i = *size; i > position; i--) {
        arr[i] = arr[i - 1];
    }

    arr[position] = element;
    (*size)++;
    return 1;
}

int deleteElement(int arr[], int *size, int position) {
    if (*size == 0) {
        printf("Array is empty, nothing to delete!\n");
        return 0;
    }

    if (position < 0 || position >= *size) {
        printf("Invalid position for deletion!\n");
        return 0;
    }

    for (int i = position; i < *size - 1; i++) {
        arr[i] = arr[i + 1];
    }

    (*size)--;
    return 1;
}

int shift(int arr[], int *size, int position){

}

int main() {
    int arr[100];
    int size = 0;
    int choice, position, element;

    while (1) {
        printf("\n--- Menu ---\n");
        printf("1. Display Array\n");
        printf("2. Insert Element\n");
        printf("3. Delete Element\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                displayArray(arr, size);
                break;
            case 2:
                printf("Enter the position for insertion: ");
                scanf("%d", &position);
                printf("Enter the element to insert: ");
                scanf("%d", &element);
                if (insertElement(arr, &size, position, element)) {
                    printf("Element inserted successfully.\n");
                }
                break;
            case 3:
                printf("Enter the position for deletion: ");
                scanf("%d", &position);
                if (deleteElement(arr, &size, position)) {
                    printf("Element deleted successfully.\n");
                }
                break;
            case 4:
                printf("Enter the position to shift right: ");
                scanf("%d", ṭ-)
            case 5:
                printf("Exiting the program.\n");
                return 0;
            default:
                printf("Invalid choice! Please try again.\n");
                break;
        }
    }

    return 0;
}
