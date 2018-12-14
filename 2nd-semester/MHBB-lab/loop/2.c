//
// Created by Mohammad Rashedul Islam on 2018-12-14.
//

#include<stdio.h>

int main() {
    int row = 5, column = 9;
    for (int i = row; i >= 0; i--) {
        if (i != row && i != 0) {
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
        } else if (i == 0) {
            for (int space = 1; space <= column - 2 * i; space++) {
                printf("*");
            }
        }
    }
    return 0;
}
