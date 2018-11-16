#include <stdio.h>

int main() {
    int a, b, c;

    printf("First number: ");
    scanf("%d", &a);
    printf("Second number: ");
    scanf("%d", &b);
    printf("Third number: ");
    scanf("%d", &c);

    if (a > b && a > c)
        printf("%d is greater.\n", a);
    else if (b > a && b > c)
        printf("%d is greater.\n", b);
    else if (c > a && c > b)
        printf("%d is greater.\n", c);
    else
        printf("There is equal numbers.\n");

    return 0;
}
