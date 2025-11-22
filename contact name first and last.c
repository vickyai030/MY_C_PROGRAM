#include<stdio.h>
int main(){
    char first[50]="vikas",last[50]="patil",full[200];
    int i=0,j=0,length=0,maxlength=20;
    while(first[i] !='\0'){
        full[length]=first[i];
        i++;
        length++;
    }
    full[length]='\0';
    length++;
    while(last[j] !='\0'){
    full[length]=last[j];
    j++;
    length++;
    }
    full[length]='\0';
    if(length<=maxlength){
        printf("name =%s\n",full);
        printf("length =%d\n",length);
        printf("name is fitted");
    }
    else{
        printf("name =%s",full);
        printf("length %d",length);
        printf("name is not fitted ");
    }
    
}
