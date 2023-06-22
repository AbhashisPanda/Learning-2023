#include <stdio.h>
#include <stdlib.h>

#define MAX_NAME_LENGTH 50

typedef struct {
    char name[MAX_NAME_LENGTH];
    int marks;
} Student;

void read_students(Student *students, int n) {
    int i;
    for (i = 0; i < n; i++) {
        printf("Enter the name of student %d: ", i+1);
        scanf("%s", students[i].name);
        printf("Enter the marks of student %d: ", i+1);
        scanf("%d", &students[i].marks);
    }
}

void write_students(Student *students, int n) {
    int i;
    printf("Name\tMarks\n");
    for (i = 0; i < n; i++) {
        printf("%s\t%d\n", students[i].name, students[i].marks);
    }
}

float compute_average_marks(Student *students, int n) {
    int i;
    int total_marks = 0;
    for (i = 0; i < n; i++) {
        total_marks += students[i].marks;
    }
    return (float)total_marks / n;
}

void print_students_above_average(Student *students, int n, float average_marks) {
    int i;
    printf("Students above average:\n");
    for (i = 0; i < n; i++) {
        if (students[i].marks > average_marks) {
            printf("%s\t%d\n", students[i].name, students[i].marks);
        }
    }
}

void print_students_below_average(Student *students, int n, float average_marks) {
    int i;
    printf("Students below average:\n");
    for (i = 0; i < n; i++) {
        if (students[i].marks < average_marks) {
            printf("%s\t%d\n", students[i].name, students[i].marks);
        }
    }
}

int main() {
    int n;

    printf("Enter number of students: ");
    scanf("%d", &n);

    Student *students = malloc(n * sizeof(Student));

    read_students(students, n);
    write_students(students, n);

    float avg_marks = compute_average_marks(students, n);
    printf("Average marks: %.2f\n", avg_marks);

    print_students_above_average(students, n, avg_marks);
    print_students_below_average(students, n, avg_marks);

    free(students);

    return 0;
}