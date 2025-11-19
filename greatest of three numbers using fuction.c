#include<stdio.h>
int largest(int a,int b,int c){
    if(a>=b&&a>=c)
    {
        printf("a is greater");
        
    }
    else if(b>=a&&b>=c){
        printf("b is greater");
    }
    else{
        printf("c is greater");
    }
}
int main(){
    largest(3,4,5);
    
}
