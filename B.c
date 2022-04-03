#include <stdio.h>
    
int main(){
    int rmaior,rmenor,altura,volume;
    if(scanf("%d %d %d",&rmaior,&altura,&rmenor)==3){
        volume = (((3.14 * altura)/3) * ((rmaior * rmaior) + (rmaior * rmenor) + (rmenor * rmenor)));
        printf("%d\n",volume);
    }
}    