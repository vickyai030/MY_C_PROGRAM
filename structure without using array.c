#include <stdio.h>

struct Student {
    int roll;
    char name[20]; // only this is array but structure itself is not array
    float marks;
};

int main() {
    struct Student s;  // Only one structure variable (not array)

    printf("Enter Roll No: ");
    scanf("%d", &s.roll);

    printf("Enter Name: ");
    scanf("%s", s.name);

    printf("Enter Marks: ");
    scanf("%f", &s.marks);

    printf("\n--- Student Details ---\n");
    printf("Roll No: %d\n", s.roll);
    printf("Name: %s\n", s.name);
    printf("Marks: %.2f\n", s.marks);

    return 0;
}
