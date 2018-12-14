//
// Created by Mohammad Rashedul Islam on 2018-12-14.
//
#include <stdio.h>

int main() {
    int a, b;
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);

    if (a == b) {
        printf("Equal numbers.\n");
    } else if (a > b) {
        printf("First number is greater.\n");
    } else {
        printf("First second is greater.\n");
    }
    return 0;
}
