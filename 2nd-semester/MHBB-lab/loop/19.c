//
// Created by Mohammad Rashedul Islam on 2018-12-14.
//

#include<stdio.h>

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (int row = 1; row <= n; row++) {
        for (int c = 1; c <=n; c++) {
            printf("%d\t", row*c);
        }
        printf("\n");
    }
    return 0;
}
