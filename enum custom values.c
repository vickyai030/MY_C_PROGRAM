#include<stdio.h>
enum level{
    low=10,
    medium=44,
    high=55
};
int main(){
   enum level l;
   l=medium;
   printf("%d",l);
}
