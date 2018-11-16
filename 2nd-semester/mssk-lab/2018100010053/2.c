#include <stdio.h>

int main() {
    int first, second, third;

    printf("Input the first number: ");
    scanf("%d", &first);
    printf("Input the second number: ");
    scanf("%d", &second);
    printf("Input the third number: ");
    scanf("%d", &third);

    if (first > second && first > third) {
        printf("This first number is greater.\n");
    } else if (second > first && second > third) {
        printf("This second number is greater.\n");
    } else if (third > first && third > second) {
        printf("This third number is greater.\n");
    } else if (first == second && second == third) {
        printf("This first number and second number and third number are equal.\n");
    }

    return 0;
}