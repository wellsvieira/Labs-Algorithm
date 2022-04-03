#include <stdio.h>


int max2(int a,int b){
    if(a>b) { return a;}
    if(b>a) { return b;}
    else {return a;}
}
int min2(int c,int d){
    if(c<d) { return c;}
    if(d<c) { return d;}
    else {return c;}
}
int fator(int n){
    int fat;
    for(fat=1;n>1;n=n-1){
        fat= fat*n;
    }
    return fat;
} 
int main(){
    int num1,num2,num3,maximo,minimo,meio;
    if(scanf("%d %d %d",&num1,&num2,&num3)==3){
        maximo = max2(max2(num1,num2),num3);
        minimo = min2(min2(num1,num2),num3);
        if(num1<maximo && num1>minimo){meio = num1;}
        if(num2<maximo && num2>minimo){meio = num2;}
        if(num3<maximo && num3>minimo){meio = num3;}
        int valor=0;
        for(int i=0;i<13;i++){
            if(fator(i)==maximo){
                printf("FATORIAL\n");
                valor=maximo;
                break;
            }
        }
        if(valor==0){
        printf("%d %d %d\n",minimo,meio,maximo);       

        }
    }    
    return 0;
}