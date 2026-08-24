#include <unistd.h>

int	main(int ac, char **av)
{
    int i;
    int start;
    int end;

    i = 0;
    if (ac == 2)
    {
        while (av[1][i])
            i++;
        i--;
        while (i >= 0)
        {
            end = i;
            while (i >= 0 && av[1][i] != ' ')
                i--;
            start = i + 1;
            while (start <= end)
            {
                write(1, &av[1][start], 1);
                start++;
            }
            if (i >= 0)
                write(1, " ", 1);
            i--;
        }
    }
    write(1, "\n", 1);
    return (0);
}