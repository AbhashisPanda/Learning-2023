#include <stdio.h>
#include <stdlib.h>

struct Student {
    char name[50];
    int rollNumber;
    float marks;
};

int main() {
    int n, i;
    struct Student *students;


    printf("Enter the number of students: ");
    scanf("%d", &n);


    students = (struct Student*) malloc(n * sizeof(struct Student));


    for (i = 0; i < n; i++) {
        printf("Enter name for student %d: ", i + 1);
        scanf("%s", (students + i)->name);

        printf("Enter roll number for student %d: ", i + 1);
        scanf("%d", &(students + i)->rollNumber);

        printf("Enter marks for student %d: ", i + 1);
        scanf("%f", &(students + i)->marks);
    }


    printf("Data for all students:\n");
    for (i = 0; i < n; i++) {
        printf("Name: %s, Roll Number: %d, Marks: %.2f\n", (students + i)->name, (students + i)->rollNumber, (students + i)->marks);
    }


    free(students);

    return 0;
}