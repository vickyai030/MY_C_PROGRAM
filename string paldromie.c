#include<stdio.h>
#include<string.h>
int main(){
    char str[20];
    char rev[20];
    int len;
    printf("enter a string");
    scanf("%s",&str);
     len=strlen(str);
     for(int i=0;i<=len;i++){
         rev[i]=str[len-1-i];
     }
     
     if(strcmp(str,rev)==0){
         printf("paldorime");
     }
     else{
         printf("not paldorime");
     }
}





