//
// Created by Mohammad Rashedul Islam on 2018-12-14.
//

#include <stdio.h>
int main()
{
    double length, height, perimeter, area;
    printf("please input length: ");
    scanf("%lf", &length);
    printf("please input height:");
    scanf("%lf", &height);

    area = length*height;
    printf("area is: %0.2lf\n", area);

    perimeter = 2*(length+height);
    printf("perimeter is: %0.2lf\n", perimeter);
    return 0;
}
