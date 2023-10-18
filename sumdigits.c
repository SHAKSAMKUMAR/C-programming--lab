#include<stdio.h>
void main()
{
    int num,sum=0,r;
    printf("enter the  numbers\n");
    scanf("%d",&num);
 while(num>0)
 {
    r=num%10;     //546%10=6     54%10=4     5%10=5
    sum=sum+r;    //0+6=6        6+=10       10+5=10
    num=num/10;   //546/10=54    54/10=5     5/10=0
 }
 printf("sum of the digits=%d",sum);
}