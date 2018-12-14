//
// Created by Mohammad Rashedul Islam on 2018-12-14.
//

#include<stdio.h>

int main() {
    int row = 5, column = 5;
    for (int i = 1; i <= row; i++) {
        if (i == 1 || i == row) {
            for (int j = 1; j <= column; j++) {
                printf("*");
            }
            if (i != row) {
                printf("\n");
            }
        } else {
            for (int j = 1; j <= column; j++) {
                if (j == 1 || j == column) {
                    printf("*");
                } else {
                    printf(" ");
                }
            }
            if (i != row) {
                printf("\n");
            }
        }

    }
    return 0;
}
