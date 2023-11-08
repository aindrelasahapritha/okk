#include <stdio.h>

int main() {
    int n;

    // Get the number of integers from the user
    printf("Enter the number of integers: ");
    scanf("%d", &n);

    int num, evenSum = 0, oddSum = 0;

    // Accept 'n' integers and calculate the sum of even and odd numbers
    for (int i = 0; i < n; ++i) {
        printf("Enter integer #%d: ", i + 1);
        scanf("%d", &num);

        if (num % 2 == 0) {
            evenSum += num;
        } else {
            oddSum += num;
        }
    }

    // Display the sum of even and odd numbers
    printf("Sum of even numbers: %d\n", evenSum);
    printf("Sum of odd numbers: %d\n", oddSum);

    return 0;
}
