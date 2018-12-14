//
// Created by Mohammad Rashedul Islam on 2018-12-14.
//

#include<stdio.h>

int main() {
    int row = 5, column = 5;
    for (int i = 1; i <= row; i++) {
        for (int j = 1; j <= column; j++) {
            printf("*");
        }
        if (i != row) {
            printf("\n");
        }
    }
    return 0;
}
