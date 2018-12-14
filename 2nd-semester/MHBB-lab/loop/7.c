//
// Created by Mohammad Rashedul Islam on 2018-12-14.
//

#include<stdio.h>

int main() {
    int row = 5, column = 9;
    for (int i = row; i >= 0; i--) {
        if (i != row) {
            for (int star = 5; star > row - i; star--) {
                printf(" ");
            }
            for (int space = 1; space <= column - 2 * i; space++) {
                if (space == 1 || space == column - 2 * i) {
                    printf("*");
                } else {
                    printf(" ");
                }
            }
            printf("\n");
        }
    }

    for (int i = 1; i <= row; i++) {
        if (i != row) {
            for (int j = 0; j <= row; j++) {
                printf(" ");
            }
            printf("  ");
            for (int star = 5; star > row - i; star--) {
                printf(" ");
            }
            for (int space = 1; space <= column - 2 * i; space++) {
                if (space == 1 || space == column - 2 * i) {
                    printf("*");
                } else {
                    printf(" ");
                }
            }
            printf("\n");
        }
    }
    return 0;
}
