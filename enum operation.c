#include<stdio.h>
enum operation{
    add=1,
    sub,
    multi,
    divi
};
int main(){
   enum operation op;
   printf("enter  a operation(1-4)\n");
   scanf("%d",&op);
   if(op==add){
       printf("addation\n");
   } else if(op==sub){
       printf("subtraction");
   }
   else if(op==multi){
       printf("multipacation");
   }
   else{
       printf("other operation");
   }
   
}
