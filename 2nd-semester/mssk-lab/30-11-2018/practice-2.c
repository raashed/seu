//
// Created by Mohammad Rashedul Islam on 2018-12-14.
//

#include <stdio.h>
int main()
{
    int n, i, c;
    printf("Enter your number: ");
    scanf("%d", &n);

    c = 0;
    for (i=1; i<=n; i++)
    {
        if (n%i==0)
        {
            c++;
        }
    }

    if (c==2)
    {
        printf("Prime number.\n");
    }
    else
    {
        printf("Not prime number.\n");
    }

    return 0;
}
