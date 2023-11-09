#include<stdio.h>
#include<stdlib.h>

int main(){
    int *a, o=0, n,e=0;

    printf("Enter the size of the Array:\n");
    scanf("%d",&n);

    a=(int*)malloc(n * sizeof(int));

    printf("Enter Elements of the Array:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
        if(a[i]%2==0)
        e+=a[i];
        else
        o+=a[i];
    }

    printf("sum of even numbers:%d\n",e);
    printf("sum of odd numbers:%d\n",o);

    free(a);
    return 0;

}