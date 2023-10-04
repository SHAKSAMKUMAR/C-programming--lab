#include<stdio.h>
void main()
{
    char c;
    printf("Enter the alphabet \n");
    scanf("%c", &c);
    if (c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
    {
        printf("Its a vowel.");
    }
    else
    {
        printf("Its a consonant.");
    }
}
