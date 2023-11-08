#include<stdio.h>

int swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}

void bubblesort(int *a,int n){
int i,j;
for(int i=0;i<n-1;i++){
    for(int j=0;j<n-i-1;j++){
        if(*(a+j)>*(a+j+1)){
            swap(a+j,a+j+1);
        }
    }
}

}

int main(){
    int n;

    printf("Enter the size of the Array:");
    scanf("%d",&n);

    int a[n];
    printf("Enter the elements of the array: ");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    
    bubblesort(a,n);
    printf("Sorted Array in asscending order:");
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    // printf("\n");
    return 0;


}