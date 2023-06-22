#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NAME_LENGTH 50

typedef struct {
    char name[MAX_NAME_LENGTH];
    int age;
    float height;
} Person;

Person *modify_person(Person *p) {
    p->age += 1;
    p->height += 0.5;
    p->name[0]++;

    return p;
}

int main() {
    Person *p = malloc(sizeof(Person));

    strcpy(p->name, "John");
    p->age = 25;
    p->height = 170.0;

    printf("Original person:\n");
    printf("Name: %s\n", p->name);
    printf("Age: %d\n", p->age);
    printf("Height: %.1f\n", p->height);

    modify_person(p);

    printf("Modified person:\n");
    printf("Name: %s\n", p->name);
    printf("Age: %d\n", p->age);
    printf("Height: %.1f\n", p->height);

    free(p);

    return 0;
}