#include <stdio.h>

int main() {
    int taka, note = 0;

    printf("Input amount of taka: ");
    scanf("%d", &taka);

    note = taka/1000;
    taka = taka%1000;
    printf("1000 taka notes required: %d\n", note);

    note = taka/500;
    taka = taka%500;
    printf("500 taka notes required: %d\n", note);

    note = taka/100;
    taka = taka%100;
    printf("100 taka notes required: %d\n", note);

    note = taka/50;
    taka = taka%50;
    printf("50 taka notes required: %d\n", note);

    note = taka/20;
    taka = taka%20;
    printf("20 taka notes required: %d\n", note);

    note = taka/10;
    taka = taka%10;
    printf("10 taka notes required: %d\n", note);

    note = taka/5;
    taka = taka%5;
    printf("5 taka notes required: %d\n", note);

    note = taka/2;
    taka = taka%2;
    printf("2 taka notes required: %d\n", note);

    note = taka/1;
    taka = taka%1;
    printf("1 taka notes required: %d\n", note);

    return 0;
}