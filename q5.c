#include<stdio.h>

int main(){
    int n;
    printf("Enter the size of the array: ");
    scanf("%d",&n);

int arr[n];
printf("Enter %d integers: ", n);

int *ptr=arr;
for(int i=0;i<n;i++){
    scanf("%d", ptr+i);
}

printf("\nArray elements along with their Addresses and values:\n" );
for(int i=0;i<n;i++){
    printf("Address: %p, Value: %d\n", (ptr+i), *(ptr+i));
}
return 0;
}