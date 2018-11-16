#include <stdio.h>

int main() {
    int a, b, x, y, m, n;

    printf("Input the A corner: \n");
    printf("x axis is: ");
    scanf("%d", &a);
    printf("y axis is: ");
    scanf("%d", &b);
    printf("Input the B corner: \n");
    printf("x axis is: ");
    scanf("%d", &x);
    printf("y axis is: ");
    scanf("%d", &y);
    printf("Input the person position: \n");
    printf("x axis is: ");
    scanf("%d", &m);
    printf("y axis is: ");
    scanf("%d", &n);

    if (m >= a && m <= x && n >= b && n <= y)
        printf("Not intruder.\n");
    else
        printf("Intruder.\n");

    return 0;
}
