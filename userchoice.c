
#include<stdio.h>
#include<math.h>
void main()
{
    int i;
    float a,b;
    printf("1.Circle 2.Square 3.Rectangle ");
    scanf("%d",&i);

    if(i==1){
        printf("Enter the radius of circle ");
        scanf("%f", &a);
        printf("Area of circle = %.2f", 3.14*a*a);
        printf("\nPeri of circle = %.2f", 3.14*2*a);
    }
    else if(i==2){
        printf("Enter the side of square ");
        scanf("%f", &a);
        printf("Area of square = %.2f", a*a);
        printf("\nPeri of square = %.2f", 4*a);
    }
    else if(i==3){
        printf("Enter the sides of rectangle ");
        scanf("%f%f", &a,&b);
        printf("Area of rectangle = %.2f", a*b);
        printf("\nPeri of rectangle = %.2f", 2*(a+b));
    }
}

