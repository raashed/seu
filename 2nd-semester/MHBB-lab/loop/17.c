//
// Created by Mohammad Rashedul Islam on 2018-12-14.
//

#include<stdio.h>

int main() {
    int sum = 2, s = 2;
    for (int i = 1; i <= 20; i++) {
        s = s + 5;
        sum = sum * s;
        if (s == 37) {
            break;
        }
    }
    printf("%d\n", sum);
    return 0;
}
