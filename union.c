#include <stdio.h>
int main()
{
    union student
    {
        int rollno;
        char name[50];
        float avg;
    };
    int n, i;
    union student s;
    printf("Enter the student roll no:\n");
    scanf("%d", &s.rollno);
    printf("student rollno:%d\n", s.rollno);
    printf("Enter the student name: \n");
    scanf("%s", s.name);
    printf("student name:%s\n", s.name);
    printf("Enter the student average:\n");
    scanf("%f", &s.avg);
    printf("Average:%f\n", s.avg);
    return 0;
}
