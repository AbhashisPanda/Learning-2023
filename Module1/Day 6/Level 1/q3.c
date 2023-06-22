#include <stdio.h>

struct TimePeriod {
    int h;
    int m;
    int s;
};


struct TimePeriod diffTimePeriod(struct TimePeriod t1, struct TimePeriod t2) {
    struct TimePeriod diff;


    int s1 = t1.h * 3600 + t1.m * 60 + t1.s;
    int s2 = t2.h * 3600 + t2.m * 60 + t2.s;
    int diffSeconds = s1 > s2 ? s1 - s2 : s2 - s1;


    diff.h = diffSeconds / 3600;
    diffSeconds %= 3600;
    diff.m = diffSeconds / 60;
    diff.s = diffSeconds % 60;

    return diff;
}

int main() {
    struct TimePeriod t1, t2, diff;


    printf("Enter the first time period (hours minutes seconds): ");
    scanf("%d %d %d", &t1.h, &t1.m, &t1.s);


    printf("Enter the second time period (hours minutes seconds): ");
    scanf("%d %d %d", &t2.h, &t2.m, &t2.s);


    diff = diffTimePeriod(t1, t2);


    printf("The difference between the two time periods is %d hours, %d minutes, and %d seconds.\n", diff.hours, diff.m, diff.s);

    return 0;
}