#include <stdio.h>

int main() {
    int angleOne, angleTwo, angleThree, sum = 0;

    printf("Input a first angle: ");
    scanf("%d", &angleOne);
    printf("Input a second angle: ");
    scanf("%d", &angleTwo);
    printf("Input a third angle: ");
    scanf("%d", &angleThree);

    sum = angleOne + angleTwo + angleThree;

    if (sum == 180) {
        printf("Triangle is valid.\n");
    } else {
        printf("Triangle is not valid.\n");
    }

    return 0;
}
