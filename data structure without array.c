#include<stdio.h>
struct student{
    char name;
    int age;
    float marks;
};
int main(){
    struct student s;
    printf("enter name age and marks\n");
    scanf("%s\n%d\n%f ",&s.name,&s.age,&s.marks);
    printf("name=%s\n age=%d\n marks=%f\n ",s.name,s.age,s.marks);
}
