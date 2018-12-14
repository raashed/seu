//
// Created by Mohammad Rashedul Islam on 2018-12-14.
//

#include <stdio.h>
int main()
{
    int n, i, s;
    printf("Enter your number: ");
    scanf("%d", &n);

    s = 0;
    for (i=1; i<=n; i++)
    {
        if (n%i==0)
        {
            s=s+i;
        }
    }

    if (s==(n*2))
    {
        printf("Perfect number.\n");
    }
    else
    {
        printf("Not perfect number.\n");
    }

    return 0;
}

