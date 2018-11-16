#include <stdio.h>

int main() {
    int makingPrice, sellingPrice;

    printf("Input making price: ");
    scanf("%d", &makingPrice);
    printf("Input selling price: ");
    scanf("%d", &sellingPrice);

    if (makingPrice > sellingPrice) {
        printf("Loss\n");
    } else if (makingPrice < sellingPrice) {
        printf("Profit\n");
    } else {
        printf("No profit, no loss.\n");
    }

    return 0;
}
