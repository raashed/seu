//
// Created by Mohammad Rashedul Islam on 2018-12-14.
//

#include<stdio.h>

int main() {
    int x, n;
    printf("Enter x number: ");
    scanf("%d", &x);

    printf("Enter n number: ");
    scanf("%d", &n);

    printf("x^n = %d\n", x*x);
    int sum = 1;
    for (int i = 1; i<=n; i++) {
        sum = sum*i;
    }
    printf("n! = %d\n", sum);
    return 0;
}
