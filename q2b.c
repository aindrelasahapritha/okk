#include <stdio.h>

int displayArray(int arr[], int n)
{
    printf("Array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int insertElement(int arr[], int *n, int position, int element)
{
    if (position < 0 || position > *n)
    {
        printf("Invalid position for insertion!\n");
        return 0;
    }

    for (int i = *n; i > position; i--)
    {
        arr[i] = arr[i - 1];
    }

    arr[position] = element;
    (*n)++;
    return 1;
}

int deleteElement(int arr[], int *n, int position)
{
    if (*n == 0)
    {
        printf("Array is empty, nothing to delete!\n");
        return 0;
    }

    if (position < 0 || position >= *n)
    {
        printf("Invalid position for deletion!\n");
        return 0;
    }

    for (int i = position; i < *n - 1; i++)
    {
        arr[i] = arr[i + 1];
    }

    (*n)--;
    return 1;
}

int shift(int arr[], int *n, int position)
{
    int temp;
    if (position > *n)
    {
        printf("Invalid position to shift!\n");
        return 0;
    }
    temp = arr[*n - 1];
    for (int i = *n - 1; i > 0; i--)
        arr[i] = arr[i - 1];
    arr[0] = temp;
    return 1;
}

int main()
{
    int arr[100];
    int n = 0;
    int choice, position, element;

    while (1)
    {
        printf("\n--- Menu ---\n");
        printf("1. Display Array\n");
        printf("2. Insert Element\n");
        printf("3. Delete Element\n");
        printf("4. Shift Element to right\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            displayArray(arr, n);
            break;
        case 2:
            printf("Enter the position for insertion: ");
            scanf("%d", &position);
            printf("Enter the element to insert: ");
            scanf("%d", &element);
            if (insertElement(arr, &n, position, element))
            {
                printf("Element inserted successfully.\n");
            }
            break;
        case 3:
            printf("Enter the position for deletion: ");
            scanf("%d", &position);
            if (deleteElement(arr, &n, position))
            {
                printf("Element deleted successfully.\n");
            }
            break;
        case 4:
            printf("Enter the position to shift right: ");
            scanf("%d", &position);
            if (shift(arr, &n, position))
            {
                printf("Element shifted successfully.\n");
            }
            break;
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
