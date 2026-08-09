#include <unistd.h>

int main(int ac, char **av)
{
    int i;
    int repeat;

    i = 0;
    if (ac == 2)
    {
        while (av[1][i])
        {
            if (av[1][i] >= 'a' && av[1][i] <= 'z')
                repeat = av[1][i] - 'a' + 1;
            else if (av[1][i] >= 'A' && av[1][i] <= 'Z')
                repeat = av[1][i] - 'A' + 1;
            else
                repeat = 1;
            while (repeat > 0)
            {
                write(1, &av[1][i], 1);
                repeat--;
            }
            i++;
        }
    }
    write(1, "\n", 1);
    return (0);
}