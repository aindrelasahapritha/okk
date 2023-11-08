#include<stdio.h>

int main(){
    int a,*p;
    printf("Enter the number to print Multiplication Table: ");
    scanf("%d",&a);

    p=&a;

    printf("Multiplication Table of %d is:",a);

    for(int i=1; i<=10; i++){
        printf("\n%d",(*p*i));
    }
    return 0;
}