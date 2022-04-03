#include <stdio.h>
#include <math.h>
#include <stdlib.h>


int get_primes(int a, int b){ // checks if a number is prime
    char *primes = (char *) malloc((b+1) * sizeof(char));
    //create array with b elements starting from 2
    if(a < 2){
        a=2;
    }
    for(int i=2;i<=b;i++){
        primes[i]=1;
    }
    //apply sieve algo (only left with primes and 0 elements)
    for(int i=2;(i*i)<=b;i++){
        if(primes[i]==1){
            for(int j=2*i;j<=b;j=j+i)
                primes[j]=0;
        } 
    }         
    //loop from a to b and count primes (elements different than 0)
    int count=0;
    for(int i=a;i<=b;i++){
        if(primes[i] == 1) 
            count+=1;
    }  
    //return number of primes between a and b
    return count;
}

int psquare(int n)
{
double num = sqrt(n);
int num2 = sqrt(n);
if(num==num2)
    return 1;
else
    return 0;
}

int istriangular(int m){ // checks if m is triangular
    int res = 8*m + 1;
    if(psquare(res)==1){
        return 1;
    }
    else
        return 0;   
}

int main(){
    int num1,num2;
    int results1;
    int results2=0;
    if(scanf("%d %d",&num1,&num2)==2){  
        results1 = get_primes(num1, num2); // puts the result of get_primes in the variable results1
        for(int i=num1;i<=num2;i++){  // prints triangular numbers between num1 and num2
            if(istriangular(i)==1){
                results2+=1;
            }
        }    
        printf("%d %d\n",results2,results1);
    }    
    return 0;
}