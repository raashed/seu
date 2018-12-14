//
// Created by Mohammad Rashedul Islam on 2018-12-14.
//

#include <stdio.h>
#include <stdlib.h>

int main() {
    int number;
    printf("Enter number: ");
    scanf("%d", &number);

    if (number >= 80) {
        printf("A+\n");
    } else if (number >= 75 && number <= 79) {
        printf("A\n");
    } else if (number >= 70 && number <= 74) {
        printf("A-\n");
    } else if (number >= 65 && number <= 69) {
        printf("B+\n");
    } else if (number >= 60 && number <= 64) {
        printf("B\n");
    } else if (number >= 55 && number <= 59) {
        printf("B-\n");
    } else if (number >= 50 && number <= 54) {
        printf("C+\n");
    } else if (number >= 45 && number <= 49) {
        printf("C\n");
    } else if (number >= 40 && number <= 44) {
        printf("D\n");
    } else {
        printf("F\n");
    }

    return 0;
}
