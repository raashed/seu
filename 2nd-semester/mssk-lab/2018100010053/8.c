#include <stdio.h>

int main() {
    int character;

    printf("Input character: ");
    scanf("%d", &character);

    if ((character >= 'a' && character <= 'z') || (character >= 'A' && character <= 'Z')) {
        printf("Character is alphabet.\n");
    } else {
        printf("Character is not alphabet.\n");
    }

    return 0;
}