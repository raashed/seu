//
// Created by Mohammad Rashedul Islam on 2018-12-14.
//

#include<stdio.h>

int main() {
    int sum = 0, s = 7;
    for (int i = 1; i <= 100; i++) {
        s = s + 13;
        sum = sum + s;
    }
    printf("%d\n", sum);
    return 0;
}
