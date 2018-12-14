//
// Created by Mohammad Rashedul Islam on 2018-12-14.
//

#include <stdio.h>

int main()
{
    int a, b, t;

    printf("please enter two integers\n");
    scanf("%d%d", &a, &b);

    printf("before swapping\nfirst integer = %d\nsecond integer = %d\n", a, b);

    t = a;
    a = b;
    b = t;

    printf("after swapping\nfirst integer = %d\nsecond integer = %d\n", a, b);

    return 0;
}
