#include <stdio.h>
#include <stdlib.h>

struct stds {
    int rollno;
    int m1, m2, m3;
    int total;
    float avg;
};

int fun(int, int, int);

int main() {
    int n, i;

    printf("Enter the number of students: ");
    scanf("%d", &n);

    struct stds *s = (struct stds *)malloc(n * sizeof(struct stds));

    for (i = 0; i < n; i++) {
        printf("Enter the student roll number and marks: ");
        scanf("%d", &s[i].rollno);
        scanf("%d", &s[i].m1);
        scanf("%d", &s[i].m2);
        scanf("%d", &s[i].m3);
        s[i].total = fun(s[i].m1, s[i].m2, s[i].m3);
        s[i].avg = ((float)(s[i].total) / 3.0);
    }

    printf("*****STUDENT DETAILS****\n");
    for (i = 0; i < n; i++) {
        printf("rollNo: %d\n", s[i].rollno);
        printf("Mark1: %d\n", s[i].m1);
        printf("Mark2: %d\n", s[i].m2);
        printf("Mark3: %d\n", s[i].m3);
        printf("Total: %d\n", s[i].total);
        printf("Average: %.2f\n", s[i].avg);
    }
    
    free(s);

    return 0;
}

int fun(int x, int y, int z) {
    int tot = (x + y + z);
    return tot;
}