#include <stdio.h>

int main() {
    int number;

    printf("Input the number: ");
    scanf("%d", &number);

    if (number % 5 == 0 && number % 11 == 0) {
        printf("Number is divisible by 5 and 11.\n");
    } else if (number % 5 == 0 && number % 11 != 0) {
        printf("Number is divisible by only 5.\n");
    } else if (number % 5 != 0 && number % 11 == 0) {
        printf("Number is divisible by only 11.\n");
    } else {
        printf("Number is not divisible by 5 and 11.\n");
    }

    return 0;
}