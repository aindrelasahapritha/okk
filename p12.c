#include <stdio.h>
#include <stdlib.h>

struct Numbers {
    int *a;
    int n;

};

int calculatesum(struct Numbers *numbers){
    int s=0;
    for(int i=0;i<numbers->n;i++){
        s+=numbers->a[i];
    
    }
return s;
}

int main(){
    struct Numbers set;

    printf("Enter the size of the array:");
    scanf("%d",&set.n);

    set.a=(int*)malloc(set.n* sizeof(int));

    printf("Enter the ele of array:\n");
    for(int i=0;i<set.n;i++){
    scanf("%d",&set.a[i]);}

    printf("Sum of Numbers:%d\n",calculatesum(&set));

    free(set.a);
    return 0;
}