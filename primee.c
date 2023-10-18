#include <stdio.h>

int main() {
    int num, isprime = 1;
    printf("Enter the Number ");
    scanf("%d", &num);

    if (num <= 1) {
        printf("It's not prime.");
    } else {
        int i = 2;
        while (i < num) {
            if (num % i == 0) {
                isprime = 0;
                break;
            }
            i++;
        }
        if (isprime) {
            printf("It's prime.");
        } else {
            printf("It's not prime.");
        }
    }
    return 0;
}
