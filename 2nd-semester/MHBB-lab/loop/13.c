//
// Created by Mohammad Rashedul Islam on 2018-12-14.
//

#include<stdio.h>

int main() {
    int sum = 0;
    for (int i = 3; i <= 1691; i+=8) {
        sum = sum + i;
    }
    printf("%d\n", sum);
    return 0;
}
