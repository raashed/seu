#include <stdio.h>

int main() {
    char character;

    printf("Input character: ");
    scanf("%c", &character);

    if ((character >= 'a' && character <= 'z') || (character >= 'A' && character <= 'Z')) {
        if (character == 'a' || character == 'e' || character == 'i' || character == 'o' || character == 'u') {
            printf("Character is vowel.\n");
        } else {
            printf("Character is consonant.\n");
        }
    } else {
        printf("Character is not alphabet.\n");
    }

    return 0;
}
