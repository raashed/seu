#include <stdio.h>

int main() {
    int monthNumber;

    printf("Input a month number: ");
    scanf("%d", &monthNumber);

    if (monthNumber == 1 || monthNumber == 3 || monthNumber == 5 || monthNumber == 7 || monthNumber == 8 ||
        monthNumber == 10 || monthNumber == 12) {
        printf("31 days\n");
    } else if (monthNumber == 4 || monthNumber == 6 || monthNumber == 9 || monthNumber == 11) {
        printf("30 days\n");
    } else if (monthNumber == 2) {
        printf("28/29 days\n");
    } else {
        printf("Week number is not valid.\n");
    }

    return 0;
}