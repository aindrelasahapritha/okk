// #include<stdio.h>

// int main(){
//     int a,b,*p,*q,temp;

//     printf("Enter the value of a and b: ");
//     scanf("%d%d",&a,&b);

//     printf("Before Swapping a=%d and b=%d \n", a,b);
    
//     p=&a;
//     q=&b;
    
//     temp=*q;
//     *q=*p;
//     *p=temp;

//     printf("After Swapping a=%d and b=%d ",a,b);

//     return 0;


// }

#include<stdio.h>

int main(){
    int a,b,*p,*q,temp;

    printf("Enter the value of a & b:");
    scanf("%d%d",&a,&b);

    printf("Before Swapping a=%d and b=%d \n",a,b);

    p=&a;
    q=&b;

    temp=*q;
    *q=*p;
    *p=temp;

    printf("After Swapping a=%d,and b=%d",a,b);

    return 0;
}