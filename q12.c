#include <stdio.h>
#include <stdlib.h>

// Define a structure to hold two numbers
struct Numbers {
    int num1;
    int num2;
};

int main() {
    // Allocate memory for the structure dynamically
    struct Numbers* nums = (struct Numbers*)malloc(sizeof(struct Numbers));

    if (nums == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    // Get input from the user
    printf("Enter the first number: ");
    scanf("%d", &nums->num1);

    printf("Enter the second number: ");
    scanf("%d", &nums->num2);

    // Calculate the sum of the two numbers
    int sum = nums->num1 + nums->num2;

    // Display the result
    printf("Sum of %d and %d is: %d\n", nums->num1, nums->num2, sum);

    // Deallocate the dynamically allocated memory
    free(nums);

    return 0;
}
