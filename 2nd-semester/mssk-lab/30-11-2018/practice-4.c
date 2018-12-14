//
// Created by Mohammad Rashedul Islam on 2018-12-14.
//

#include <stdio.h>
int main()
{
    int n, c;
    printf("Enter your number: ");
    scanf("%d", &n);

    c = 0;
    if (n>1)
    {
        while(n>1)
        {
            c++;
            if (n%2==0)
            {
                n=n/2;
            }
            else
            {
                n = (3*n)+1;
            }
        }
    }
    else
    {
        printf("Negative number is not possible.\n",c);
    }


    printf("%d\n",c);
    return 0;
}
