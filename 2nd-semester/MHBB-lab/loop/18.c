//
// Created by Mohammad Rashedul Islam on 2018-12-14.
//

#include<stdio.h>

int main() {
    int s, e;
    printf("Enter a number from start your prime numbers: ");
    scanf("%d", &s);
    printf("Enter a number to end your prime numbers: ");
    scanf("%d", &e);

    int a[e];
    for (int i = 0; i < e; i++) {
        a[i] = 1;
    }
    for (int i = 2; i < e; i++) {
        if (a[i] == 1) {
            if (i >= s) {
                printf("%d\n", i);
            }
            for (int j = i; j <= e; j = j + i) {
                a[j] = 0;
            }
        }
    }
    return 0;
}
