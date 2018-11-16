#include <stdio.h>

int main() {
    int sideOne, sideTwo, sideThree;

    printf("Input a first side: ");
    scanf("%d", &sideOne);
    printf("Input a second side: ");
    scanf("%d", &sideTwo);
    printf("Input a third side: ");
    scanf("%d", &sideThree);

    if (sideOne + sideTwo > sideThree || sideOne + sideThree > sideTwo || sideTwo + sideThree > sideOne) {
        printf("Triangle is valid.\n");
    } else {
        printf("Triangle is not valid.\n");
    }

    return 0;
}
