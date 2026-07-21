// program to create a struct to store 5 diff data types
#include <stdio.h>
struct Student {
    int roll;
    char name[50];
    float marks;
};

int main() {
    struct Student s[3];
    for (int i = 0; i < 3; i++) {
        printf("Enter details for student %d:\n", i + 1);
        printf("Roll number: ");
        scanf("%d", &s[i].roll);
        printf("Name: ");
        scanf("%s", s[i].name);
        printf("Marks: ");
        scanf("%f", &s[i].marks);
    }
        
        printf("\n\n---- All Student Details ----\n");
        for (int i = 0; i < 3; i++) {
            printf("\nStudent %d:\n", i + 1);
            printf("Roll Number: %d\n", s[i].roll);
            printf("Name: %s\n", s[i].name);
            printf("Marks: %.2f\n", s[i].marks);
            printf("\n");
        }

        return 0;
    }

   

