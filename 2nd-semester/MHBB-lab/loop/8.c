//
// Created by Mohammad Rashedul Islam on 2018-12-14.
//

#include<stdio.h>

int main() {
    for (int i = 1; i < 10000; i++) {
        int currentNumber = i, r, sum = 0;
        while (1) {
            r = currentNumber % 10;
            sum = sum + r * r * r;
            currentNumber = currentNumber / 10;
            if (currentNumber == 0) {
                break;
            }
        }
        if (i == sum) {
            printf("%d number is Armstrong number\n", i);
        }
    }
    return 0;
}
