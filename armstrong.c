// wap to find amstrom number
#include<stdio.h>
#include<math.h>
void main()
{
    int  num,sum=0,r,l,num1;
    printf("enter the  number");
    scanf("%d",&num);
    num1=num;
    while(num>0)
{
    l++;
    num=num/10;
}
num=num1;
while(num>0)
{

    r=num%10;
    sum=sum+(r*r*r);
    num=num/10;
}
if(num1==sum)
{
printf("the given number is armstrong");
}
else
printf("the given number is not armstrong");
}