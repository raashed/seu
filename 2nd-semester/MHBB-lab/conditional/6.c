//
// Created by Mohammad Rashedul Islam on 2018-12-14.
//

#include <stdio.h>
#include <stdlib.h>

int main() {
    int a, b;
    printf("Enter cost price: ");
    scanf("%d", &a);
    printf("Enter selling price: ");
    scanf("%d", &b);

    if (a == b) {
        printf("No profit or neither loss.\n");
    } else if (a > b) {
        printf("Incurred loss of: %d\n",abs(a-b));
    } else {
        printf("Made profit of: %d\n",abs(b-a));
    }
    return 0;
}
