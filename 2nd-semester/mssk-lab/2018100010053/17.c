#include <stdio.h>

int main() {
    int numberOne, numberTwo, numberThree, temp, tempPlus, tempMinus;

    printf("Input first number: ");
    scanf("%d", &numberOne);
    printf("Input second number: ");
    scanf("%d", &numberTwo);
    printf("Input third number: ");
    scanf("%d", &numberThree);

    temp = (numberTwo*numberTwo) - (4*numberOne*numberThree);
    tempPlus = -numberTwo + temp;
    tempMinus = -numberTwo - temp;

    printf("Root 1 is: %d\n", tempPlus/(2*numberOne));
    printf("Root 2 is: %d\n", tempMinus/(2*numberOne));

    return 0;
}
