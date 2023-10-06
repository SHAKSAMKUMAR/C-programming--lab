#include<stdio.h>
void main()
{
    int i=0,n;
    printf("give your limit for printng even numbers");
    scanf("%d", &n);
    while(i<=n)
    {
        printf("%d\n", i);
        i=i+2;
    }
}