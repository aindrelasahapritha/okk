#include<stdio.h>

int main(){
    int a,b,*p,*q,temp;

    printf("Enter the value of a & b:");
    scanf("%d%d",&a,&b);

    printf("Before Swapping a=%d and b=%d \n",a,b);

    p=&a;
    q=&b;

    temp=*q;
    *q=*p;
    *p=temp;

    printf("After Swapping a=%d,and b=%d",a,b);

    return 0;
}

// #include <stdio.h>

// void swap(int *a, int *b) {
//     int temp = *a;
//     *a = *b;
//     *b = temp;
// }

// int main() {
//     int num1, num2, num3, num4;

//     // Input four numbers
//     printf("Enter the first number: ");
//     scanf("%d", &num1);

//     printf("Enter the second number: ");
//     scanf("%d", &num2);

//     printf("Enter the third number: ");
//     scanf("%d", &num3);

//     printf("Enter the fourth number: ");
//     scanf("%d", &num4);

//     // Display the numbers before swapping
//     printf("Before swapping: num1 = %d, num2 = %d, num3 = %d, num4 = %d\n", num1, num2, num3, num4);

//     // Swap using pointers
//     swap(&num1, &num2);
//     swap(&num2, &num3);
//     swap(&num3, &num4);

//     // Display the numbers after swapping
//     printf("After swapping: num1 = %d, num2 = %d, num3 = %d, num4 = %d\n", num1, num2, num3, num4);

//     return 0;
// }
