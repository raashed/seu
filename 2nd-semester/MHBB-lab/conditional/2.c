//
// Created by Mohammad Rashedul Islam on 2018-12-14.
//


#include <stdio.h>

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    if (n % 2 == 0 && n % 3 == 0) {
        printf("Divisible by 2 and 3.\n");
    } else if (n % 2 == 0 || n % 3 == 0) {
        printf("Divisible by 2 or 3.\n");
    } else {
        printf("Not divisible by 2 or 3.\n");
    }
    return 0;
}
