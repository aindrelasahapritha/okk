#include <stdio.h>
 
int main()
{
    int arr[11] = {1,2,3,4,5,6,67,8,9};
    int i, x, pos, n = 10;

    for (i = 0; i <9; i++)
        printf("%d ", arr[i]);
    printf("\n");
 
    printf("Enter the position at which the element will be inserted :");
    scanf("%d",&pos);

    printf("Enter the value of the element that will be inserted :");
    scanf("%d",&x);
 

    n++;

    for (i = n - 1; i >= pos; i--)
        arr[i] = arr[i - 1];
 

    arr[pos - 1] = x;
 
    for (i = 0; i < 10; i++)
        printf("%d ", arr[i]);
    printf("\n");
 
    return 0;
}