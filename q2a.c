#include <stdio.h>

int main() {
    int arr[100];
    int size = 0;
    int position, element;

    while (1) {
        printf("\n--- Menu ---\n");
        printf("1. Display Array\n");
        printf("2. Insert Element\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        int choice;
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                if (size == 0) {
                    printf("Array is empty.\n");
                } else {
                    printf("Array: ");
                    for (int i = 0; i < size; i++) {
                        printf("%d ", arr[i]);
                    }
                    printf("\n");
                }
                break;
            case 2:
                if (size >= 100) {
                    printf("Array is full, cannot insert more elements.\n");
                    break;
                }
                printf("Enter the position for insertion: ");
                scanf("%d", &position);
                if (position < 0 || position > size) {
                    printf("Invalid position for insertion!\n");
                    break;
                }
                printf("Enter the element to insert: ");
                scanf("%d", &element);
                for (int i = size; i > position; i--) {
                    arr[i] = arr[i - 1];
                }
                arr[position] = element;
                size++;
                printf("Element inserted successfully.\n");
                break;
            case 3:
                printf("Exiting the program.\n");
                return 0;
            default:
                printf("Invalid choice! Please try again.\n");
                break;
        }
    }

    return 0;
}
