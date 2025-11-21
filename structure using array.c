#include <stdio.h>
int main() {
    struct virat{
        int age;
        float marks;
        char name[40];
    };
    struct virat k[3];
    for(int i=0; i<3; i++){
        printf("enter age ,marks & name:\n");
        scanf( "%d %f %s",&k[i].age,&k[i].marks,&k[i].name);
    }
    for(int i=0;i<3;i++){
    printf("age=%d\n marks=%f\n name=%s\n",k[i].age,k[i].marks,k[i].name);
    }
}
