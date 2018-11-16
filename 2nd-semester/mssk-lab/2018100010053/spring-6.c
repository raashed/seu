#include <stdio.h>

int main() {
    double buy, discount = 0;
    printf("Buying amount: ");
    scanf("%lf", &buy);

    if (buy >= 500) {
        discount = (buy*5)/100;
    } else if (buy >= 501 && buy <= 1000) {
        discount = (buy*10)/100;
    } else if (buy >= 1001 && buy <= 2000) {
        discount = (buy*15)/100;
    } else if (buy >= 2001) {
        discount = (buy*20)/100;
    }

    printf("Sub   total = %.2f\n", buy);
    printf("Dis   total = %.2f\n", discount);
    printf("Grant total = %.2f\n", buy - discount);
    return 0;
}
