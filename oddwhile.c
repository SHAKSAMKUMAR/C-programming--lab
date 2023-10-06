#include<stdio.h>
void main()
{
    int i=1,n;
    printf("give your limit for printng odd numbers");
    scanf("%d", &n);
    while(i<=n)
    {
        printf("%d\n", i);
        i=i+2;
    }
}