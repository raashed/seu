#include <stdio.h>

int main() {
    int unit, more = 0;
    double sub = 0, total = 0, totalBill = 0;

    printf("Enter unit of electricity: ");
    scanf("%d", &unit);

    if (unit <= 50) {
        sub = unit*0.50;
        total = total + sub;
    } else {
        sub = 50*0.50;
        total = total + sub;
        unit = unit - 50;
    }

    if (unit <= 100) {
        sub = unit*0.75;
        total = total + sub;
    } else {
        sub = 100*0.75;
        total = total + sub;
        unit = unit - 100;
    }

    if (unit <= 100) {
        sub = unit*1.20;
        total = total + sub;
    } else {
        sub = 100*1.20;
        total = total + sub;
        unit = unit - 100;
        more = 1;
    }

    if (more == 1) {
        sub = unit*1.50;
        total = total + sub;
    }

    totalBill = (total*20)/100;

    printf("Total bill: %.2f", totalBill);

    return 0;
}
