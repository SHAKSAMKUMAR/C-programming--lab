
#include <stdio.h>
#include<math.h>
void main() 
{
    float r,s,l,b,area,peri;
    // Area and Peri of circle    
    printf("Enter the radius\n");
    scanf("%f", &r);
    area = 3.14 * r * r;
    peri = 2*3.14*r;
    printf("Area of circle = %.2f\n", area);
    printf("Peri of circle = %.2f\n", peri);

    // Area and Peri of square
    printf("\nEnter the side\n");
    scanf("%f", &s);
    area = s*s;
    peri = 4*s;
    printf("Area of square = %.2f\n", area);
    printf("Peri of square = %.2f\n", peri);

    // Are and Perimof rectangle
    printf("\nEnter the length and breadth\n");
    scanf("%f%f", &l,&b);
    area = l * b;
    peri = 2*(l +b);
    printf("Area of rectangle = %.2f\n", area);
    printf("Peri of rectangle = %.2f\n", peri);
}