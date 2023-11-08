#include<stdio.h>

int main(){
    int n,e=0,o=0,*p;

    printf("Enter the size of the Array: ");
    scanf("%d",&n);
    
    int a[n];

    printf("Enter the elements of the Array: ");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    p=a;
    for(int i=0;i<n;i++){
        if(*p %2==0)
        e=e+*p;
        else
        o=o+*p;
        p++;
    }

printf("Sum of Even numbers: %d\n",e);
printf("Sum of Odd numbers: %d\n", o);
return 0;
}