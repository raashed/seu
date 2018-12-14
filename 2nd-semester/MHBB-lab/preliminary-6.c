//
// Created by Mohammad Rashedul Islam on 2018-12-14.
//

#include<stdio.h>

int main()
{
    float fah, cel;
    printf("please enter temperature in Fahrenheit: ");
    scanf("%f",&fah);
    cel=(fah-32) / 1.8;
    printf("fahrenheit temperature in Celsius = %f\n",cel);

    return 0;
}
