#include <stdio.h>

int main() {
    int character;

    printf("Input a character: ");
    scanf("%d", &character);

    if ((character >= 'a' && character <= 'z') || (character >= 'A' && character <= 'Z')) {
        printf("Character is alphabet.\n");
    } else if (character >= 0 && character <= 9) {
        printf("Character is number.\n");
    } else {
        printf("Character is special character.\n");
    }

    return 0;
}