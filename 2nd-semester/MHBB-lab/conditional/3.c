//
// Created by Mohammad Rashedul Islam on 2018-12-14.
//

#include <stdio.h>

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    if (n % 2 == 0) {
        printf("Number is even.\n");
    } else {
        printf("Number is odd.\n");
    }
    return 0;
}
