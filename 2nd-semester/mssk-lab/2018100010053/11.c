#include <stdio.h>

int main() {
    char character;

    printf("Input a character: ");
    scanf("%c", &character);

    if (character >= 'a' && character <= 'z') {
        printf("Character is lowercase alphabet.\n");
    } else if (character >= 'A' && character <= 'Z') {
        printf("Character is uppercase alphabet.\n");
    } else {
        printf("Character is not alphabet.\n");
    }

    return 0;
}