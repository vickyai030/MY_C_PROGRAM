#include<stdio.h>
int main(){
    int vicky[7]={1,2,3,4,5,6,7};
    int sum=0;
    for( int i=0;i<7;i++){
        scanf("%d",&vicky[i]);
        sum+=vicky[i];
        
    }
    printf("%d",sum);
}
