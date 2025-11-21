#include<stdio.h>
int main(){
   int marks;
   printf("enter a marks");
   scanf("marks=%d",&marks);
   if(marks>=90){
       printf("grade a");
   }
   else if(marks>=75){
       printf("grade b");
   }
   else if(marks>=60){
       printf("grade c");
   }
   else if(marks<50){
       printf("grade d");
   }
   else{
       printf("grade f");
   }
}    
