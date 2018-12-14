//
// Created by Mohammad Rashedul Islam on 2018-12-14.
//

#include<stdio.h>

int main()
{
    int basic_salary;
    double house_allowance, medical_allowance, extra_income, gross_salary;

    printf("please enter basic salary: ");
    scanf("%d", &basic_salary);

    house_allowance = (30 * basic_salary) / 100;
    medical_allowance = (5 * basic_salary) / 100;
    extra_income = 1000;

    gross_salary = basic_salary + house_allowance + medical_allowance+extra_income;

    printf("rahim`s gross salary : %0.2lf\n", gross_salary);
    return 0;
}
