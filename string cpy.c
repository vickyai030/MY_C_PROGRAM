#include<stdio.h>
#include<string.h>
int main(){
    char name[10];
    char dest[20];
    printf("enter a name");
    scanf("%s",&name);
     
     strcpy(dest,name);
     printf("%s",name);
     printf("%s",dest);
   
    
    
}
