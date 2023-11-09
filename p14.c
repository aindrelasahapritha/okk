#include<stdio.h>
#include<stdlib.h>

struct TD{
    float *t;
    int n;

}
;

void convtof(struct TD *tD){
    for(int i=0;i<tD->n;i++){
        tD->t[i]=(tD->t[i]-32)* 5/9;
    }
}

int main(){
    struct TD data;

    printf("Enter the number Temp in Celcius:");
    scanf("%d",&data.n);
    
    data.t=(float*)malloc(data.n*sizeof(float));
    
    printf("Enter tem in F:\n");
    for(int i=0;i<data.n;i++){
        scanf("%f",&data.t[i]);
    
    }

    convtof(&data);

printf("Temperatures in Celsius:\n");

for(int i=0;i<data.n;i++){
    printf("%.2f\n",data.t[i]);
}
free(data.t);
return 0;

}
