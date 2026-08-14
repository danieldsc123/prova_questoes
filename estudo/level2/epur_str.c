#include <unistd.h>

int main(int ac, char **av)
{
    int i;
    int space;
    int printed;

    i = 0;
    space = 0;
    printed = 0;
    if (ac == 2)
    {
        while (av[1][i])
        {
            if (av[1][i] == ' ' || av[1][i] == '\t')
                space = 1;
            else
            {
                if (space && printed)
                    write(1, " ", 1);
                write(1, &av[1][i], 1);
                printed = 1;
                space = 0;
            }
            i++;
        }
    }
    write(1, "\n", 1);
    return (0);
}