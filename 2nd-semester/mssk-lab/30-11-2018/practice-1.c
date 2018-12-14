//
// Created by Mohammad Rashedul Islam on 2018-12-14.
//

#include <stdio.h>
int main()
{
    int n, i, e, o;
    printf("Enter your number: ");
    scanf("%d", &n);

    e = 0;
    o = 0;
    for (i=1; i<=n; i++)
    {
        if (n%i==0)
        {
            if (i%2==0)
            {
                e++;
            }
            else
            {
                o++;
            }
        }
    }

    printf("Even = %d\n",e);
    printf("Odd = %d\n",o);
    return 0;
}

