#include <stdio.h>

int
main (void)
{
    float n, max;


    max = 0;
    printf("Enter a series of numbers: ");
    do
        {
            scanf("%f", &n);
            if(n > max)
                max = n;
        }
    while (n > 0);

    printf("Biggest number entered is: %.2f\n", max);

    return 0;
}
