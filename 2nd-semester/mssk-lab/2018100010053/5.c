#include <stdio.h>

int main() {
    int number;

    printf("Input the number: ");
    scanf("%d", &number);

    if (number == 0) {
        printf("Zero.\n");
    } else if (number > 0) {
        printf("Positive.\n");
    } else if (number < 0) {
        printf("Negative.\n");
    }

    return 0;
}