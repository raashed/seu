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
    if (n>0)
    {
        while(n>0)
        {
            c++;
            n = n/10;
        }
    }
    else if (n<0)
    {
        while(n<0)
        {
            c++;
            n = n/10;
        }
    }
    else
    {
        c++;
    }


    printf("%d\n",c);

    return 0;
}
