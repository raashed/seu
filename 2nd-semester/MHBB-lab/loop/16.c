//
// Created by Mohammad Rashedul Islam on 2018-12-14.
//

#include<stdio.h>

int main() {
    int n;
    printf("Enter your number: ");
    scanf("%d", &n);
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            sum = sum + j;
        }
    }
    printf("%d\n", sum);
    return 0;
}
