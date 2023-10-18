#include<stdio.h>
int main()
{
    int first=0,second=1,third,I,n;
    printf("enter the length of fidonacci series\n");
    scanf("%d",&n);
    printf("the fidonacci series is:\n");
    printf("%d %d ",first,second);
    for (I=2;I<=n;I++)
    {
        third=first+second;
        printf(" %d ",third);
        first=second;
        second=third;
    }
    return 0;
}