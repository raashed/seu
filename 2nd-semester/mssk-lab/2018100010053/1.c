#include <stdio.h>

int main() {
    int first, second;

    printf("Input the first number: ");
    scanf("%d", &first);
    printf("Input the second number: ");
    scanf("%d", &second);

    if (first > second) {
        printf("This first number is greater than second. %d > %d \n", first, second);
    } else if (second > first) {
        printf("This second number is greater than first. %d < %d \n", first, second);
    } else if (first == second) {
        printf("This first number and second number is equal. %d == %d \n", first, second);
    }

    return 0;

}