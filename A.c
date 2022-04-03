#include <stdio.h>

int main(){
    int x,y,quadrado;
    if(scanf("%d %d",&x,&y)==2) {
        if(x>y){
            quadrado = x*x;
            printf("%d\n",quadrado);
        }   
        if(x<y){
            quadrado = y*y;
            printf("%d\n",quadrado);
        }
        if(x==y){
            printf("IGUAIS\n");
        }
    }
    return 0;
}    