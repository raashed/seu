//
// Created by Mohammad Rashedul Islam on 2018-12-14.
//

#include<stdio.h>

int main() {
    int sum = 0, s = 5;
    for (int i = 1; i <= 75; i++) {
        s = s + 6;
        if (i % 2 == 0) {
            sum = sum + s;
        } else {
            sum = sum - s;
        }
    }
    printf("%d\n", sum);
    return 0;
}
