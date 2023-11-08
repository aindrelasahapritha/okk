#include<stdio.h>

int main(){

    int n,e=0,o=0,*p;

    printf("Enter the size of Array: ");
    scanf("%d",&n);

    int a[n];

    printf("Enter The elements of the Array:");
    for(int i=0;i<n;i++){
    scanf("%d", &a[i]);}

    p=a;
    
    for(int i=0;i<n;i++){
    if(*p%2==0)
        e=e+*p;
    else
    o+=*p;
    p++;
    }
    printf("Enter the sum of Even Numbers= %d\n",e);
    
    printf("Enter the sum of Odd Numbers= %d\n",o);

return 0;
}