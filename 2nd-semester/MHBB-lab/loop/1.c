//
// Created by Mohammad Rashedul Islam on 2018-12-14.
//

#include<stdio.h>

int main() {
    int row = 5, column = 9;
    for (int i = 0; i < row; i++) {
        for (int k = 0; k < i; k++) {
            printf(" ");
        }
        for (int j = i; j < column - i; j++) {
            printf("*");
        }
        printf("\n");
    }
    for (int i = row; i >= 0; i--) {
        if (column - i != row && i != row) {
            for (int k = 0; k < i; k++) {
                printf(" ");
            }
            for (int j = i; j < column - i; j++) {
                printf("*");
            }
            printf("\n");
        }
    }
    return 0;
}
