#include <unistd.h>

int main(int ac, char **av)
{
    int i;
    int end;

    i = 0;
    if (ac == 2)
    {
        while(av[1][i])
            i++;
        i--;
        while(i >= 0 && av[1][i] == ' ' && av[1][i] == '\t')
            i--;
        end = i;
        while(i >= 0 && av[1][i] != ' ' && av[1][i] != '\t')
            i--;
        i++;
        while(i <= end)
        {
            write(1, &av[1][i], 1);
            i++;
        }
    }
    write(1, "\n", 1);
    return (0);
}