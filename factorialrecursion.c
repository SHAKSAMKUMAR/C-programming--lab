#include <stdio.h>

int factorial(int n)
{
    if(n==0 || n==1)
    return 1;
    else
    return n*factorial(n-1); 
};

int main()
{
   int number;
   printf("Enter the number :- ");
   scanf("%d",&number);
   if(number<0)
   printf("Factorial is not defined for negative numbers\n");
   else
   {
    int result = factorial(number);
    printf("Factorial is %d", result);
   }
    return 0;
}