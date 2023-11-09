#include <stdio.h>
#include <stdlib.h>

int main() {
    int *numbers;
    int size, i;
    int sum_even = 0, sum_odd = 0;

   
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    numbers = (int *)malloc(size * sizeof(int));

    printf("Enter %d numbers:\n", size);
    for (i = 0; i < size; ++i) {
        scanf("%d", &numbers[i]);
    }

    for (i = 0; i < size; ++i) {
        if (numbers[i] % 2 == 0) {
            sum_even += numbers[i];
        } else {
            sum_odd += numbers[i];
        }
    }

    printf("Sum of even numbers: %d\n", sum_even);
    printf("Sum of odd numbers: %d\n", sum_odd);

    free(numbers);

    return 0; 
}
