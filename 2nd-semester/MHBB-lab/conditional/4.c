//
// Created by Mohammad Rashedul Islam on 2018-12-14.
//

#include <stdio.h>

int main() {
    char n;
    printf("Enter a alphabet: ");
    scanf("%s", &n);

    if (n == 'a' || n == 'e' || n == 'i' || n == 'o' || n == 'u') {
        printf("Alphabet is vowel.\n");
    } else {
        printf("Alphabet is consonant.\n");
    }
    return 0;
}
