#include<stdio.h>
int factorial(int n){
    if(n==0){
        return 1;
    }
    return n*factorial(n-1);
    
}
int main(){
     int n=8;
     int fact = factorial(n);
     printf("factorial of %d is %d",n,fact);
    
}
