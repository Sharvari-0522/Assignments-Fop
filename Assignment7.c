//Student using structure

#include <stdio.h>

struct student {
    int roll;
    char name[50];
    int m1, m2, m3;
};

int main() {
    struct student s;
    int total;
    float percent;

    scanf("%d %s %d %d %d", &s.roll, s.name, &s.m1, &s.m2, &s.m3);

    total = s.m1 + s.m2 + s.m3;
    percent = total / 3.0;

    printf("%d\n%.2f", total, percent);

    return 0;
}
