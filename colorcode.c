#include<stdio.h>
void main()
{
    char c;
    printf("enter the colour code");
    scanf("%c",&c);
    switch(c)
    {
        case 'r':
        case 'R':
        printf("you rntered colour RED");
        break;
        case 'g':
        case 'G':
        printf("you entered colour Green");
        case 'b':
        case 'B':
        printf("you entered colour Blue");
        break;
    }
}