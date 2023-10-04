
#include <stdio.h>

int main() 
{
    float a,b,add,sub,multiply,div;
    
    printf("Enter two numbers: ");
    scanf("%f%f", &a,&b);

    add = a + b;
    printf("\nThe sum is: %.2f", add);

    sub = a - b;
    printf("\nThe sub is:  %.2f", sub);

    multiply = a * b;
    printf("\nThe multiply is:  %.2f", multiply);

    div = a/b;
    printf("\nThe div is:  %.2f", div);
    return 0;
}