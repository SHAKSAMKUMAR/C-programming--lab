#include<stdio.h>
int main()
{
 float r, l, b, s, a, d, c;
 printf("1. for Circle, 2. for Rectangle and 3. for square:\n");
 scanf("%f", &a);
 if(a==1)
 {
    printf("1. for Area and 2. for Perimter:\n");
    scanf("%f", &d);
    if(d==1)
    {
        printf("Enter the radius:");
        scanf("%f", &r);
        c=3.14*r*r;
        printf("Area=%f", c);
    }
    else
    {   
        printf("Enter the radius:");
        scanf("%f", &r);
        c=2*3.14*r;
        printf("Perimeter=%f", c);
    }
 }
 else if(a==2)
 {
     printf("1. for Area and 2. for Perimter:\n");
    scanf("%f", &d);
    if(d==1)
    {   
        printf("Enter the length & breadth:");
        scanf("%f%f", &l, &b);
        c=l*b;
        printf("Area=%f", c);
    }
    else
    {   
        printf("Enter the length & breadth:");
        scanf("%f%f", &l, &b);
        c=2*(l+b);
        printf("Perimeter=%f", c);
    }
 }
 else if(a==3)
 {   
     printf("1. for Area and 2. for Perimter:\n");
    scanf("%f", &d);
    if(d==1)
    {   
        printf("Enter the side:");
        scanf("%f", &s);
        c=s*s;
        printf("Area=%f", c);
    }
    else
    {  
        printf("Enter the side:");
        scanf("%f", &s);
        c=4*s;
        printf("Perimeter=%f", c);
    }
 }
else
{
    printf("Incorrect Command");
}
return 0;
}
