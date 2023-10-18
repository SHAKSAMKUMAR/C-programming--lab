#include<stdio.h>
int main()
{
    int number,i;
    unsigned long long factorial=1;
    printf("Enter a positive integer:");
    scanf("%d",  &number);
    if(number<0)
    {
      printf("Error:factorial is not defined for negative number\n");
    }
    else {
        for(i=1;i<=number;++i)
        {
            factorial*=1;
        }
    printf("factoral if %d=%llu\n",number,factorial);
    }
    return 0;
}