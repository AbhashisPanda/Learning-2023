#include <stdio.h>
#include <math.h>

typedef struct {
    float x;
    float y;
    float z;
} Point;

float distance(Point p1, Point p2) {
    float dx = p2.x - p1.x;
    float dy = p2.y - p1.y;
    float dz = p2.z - p1.z;
    return sqrt(dx*dx + dy*dy + dz*dz);
}

int main() {
    Point p1, p2;

    printf("Enter coordinates of the first point: ");
    scanf("%f", &p1.x);
    scanf("%f", &p1.y);
    scanf("%f", &p1.z);

    printf("Enter the coordinates of the second point: ");
    scanf("%f", &p2.x);
    scanf("%f", &p2.y);
    scanf("%f", &p2.z);

  
    float dist = distance(p1, p2);

  
    printf("Distance:%.2f\n",dist);

    return 0;
}