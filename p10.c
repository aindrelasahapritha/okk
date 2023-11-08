#include<stdio.h>
#include<stdlib.h>

int main(){
     
     int n;

     printf("Enter the size of the Array:");
     scanf("%d",&n);

     int* arr=(int*)malloc(n * sizeof(int));

     if(arr==NULL){
        printf("Memory allocation Failed\n");
        return 1;
     }

     printf("Enter %d Elements:\n",n);
     for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
     }

     printf("Array Elements and their Addresses:\n");
     for(int i=0;i<n;i++){
        printf("Elements at Index %d: %d (Address: %p)\n", i,arr[i],(void*)&arr[i]);

     }

     free(arr);
     return 0;

     

}