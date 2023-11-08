#include <stdio.h>
#include <stdlib.h>

// Define a structure to hold the numbers
struct Numbers {
    int num1, num2, num3, num4, num5;
};

int main() {
    // Allocate memory for the structure dynamically
    struct Numbers* numbers = (struct Numbers*)malloc(sizeof(struct Numbers));

    if (numbers == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    // Get input for the five numbers
    printf("Enter five numbers:\n");
    scanf("%d %d %d %d %d", &numbers->num1, &numbers->num2, &numbers->num3, &numbers->num4, &numbers->num5);

    // Calculate the average
    double average = (numbers->num1 + numbers->num2 + numbers->num3 + numbers->num4 + numbers->num5) / 5.0;

    // Display the average
    printf("Average: %.2f\n", average);

    // Deallocate dynamically allocated memory
    free(numbers);

    return 0;
}
