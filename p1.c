#include <stdio.h>

int main(){

    int s1,s2;

    printf("Enter the size of the First Array: ");
    scanf("%d",&s1);
    
    int a1[s1];
    printf("Enter elements of the first array:");
    for(int i=0;i<s1;i++)
    scanf("%d",&a1[i]);

    printf("Enter the size of the Second Array: ");
    scanf("%d",&s2);

    int a2[s2];
    printf("Enter elements of the Second array:");
    for(int i=0;i<s2;i++)
    scanf("%d",&a2[i]);

    printf("\nMerged Array:\n");
    for(int i=0;i<s1;i++)
    printf("%d",a1[i]);
    for(int i=0;i<s2;i++)
    printf("%d",a2[i]);

    return 0;


}