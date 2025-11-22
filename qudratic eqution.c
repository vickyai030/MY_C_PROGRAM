#include<stdio.h>
#include<math.h>
int main(){
    float a,b,c,root1,root2,disc,real,imag;
    printf("enter a cofficentes:\n");
    scanf("%f %f %f",&a,&b,&c);
    if(a==0&&b==0){
        printf("invalid coffcients\n");
    }
    else if(a==0){
        root1=-c/b;
        printf("linear equation");
    }
    else
    {
        disc=b*b-4*a*c;
        printf("discriment=%f\n",disc);
    }
    if(disc>0){
        root1=(-b+sqrt(disc)/(2*a));
        root2=(-b-sqrt(disc)/(2*a));
        printf("two distinct real roots %f and %f",root1,root2);
        
    }
    else if(disc==0){
        root1=-b/(2*a);
        printf("one real  root %f",root1);
    }
    else{
        real=-b/(2*a);
        imag=sqrt(-disc)/(2*a);
        printf("complex roots %f+%f and %f-%f\n",real,imag,real,imag);
    }
}
