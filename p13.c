#include <stdio.h>
#include <stdlib.h>

struct Numbers {
    int *a;
    int n;

};

float calculateavgsum(struct Numbers *numbers){
    int s=0;
    for(int i=0;i<numbers->n;i++){
        s+=numbers->a[i];
    
    }
return (float)s/numbers->n;
}


int main(){
    struct Numbers set;

    set.n=5;

    set.a=(int*)malloc(set.n* sizeof(int));
    if(set.a==NULL){
        printf("Memory allication Failed");
        return 1;
    }

    printf("Enter the ele of array:\n");
    for(int i=0;i<set.n;i++){
    scanf("%d",&set.a[i]);}

    float average= calculateavgsum(&set);
    printf("Average of numbers:%.2f\n",average);

    free(set.a);
    return 0;
}