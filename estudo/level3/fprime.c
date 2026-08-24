#include <stdio.h>
#include <stdlib.h>

int	main(int ac, char **av)
{
    int n;
    int div;
    int first;

    if (ac == 2)
    {
        n = atoi(av[1]);
        div = 2;
        first = 1;

        if (n == 1)
            printf("1");

        while (n > 1)
        {
            if (n % div == 0)
            {
                if (!first)
                    printf("*");
                printf("%d", div);
                first = 0;
                n = n / div;
            }
            else
                div++;
        }
    }
    printf("\n");
    return (0);
}