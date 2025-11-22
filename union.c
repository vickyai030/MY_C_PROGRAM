#include<stdio.h>
union num{
    int x;
    float y;
};
int main(){
    union num n;
        n.x=10;
        printf("%d\n",n.x);
        n.y=55.7;
        printf("%f\n",n.y);
        printf("%d",n.x);    
}
