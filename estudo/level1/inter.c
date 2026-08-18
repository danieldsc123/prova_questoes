#include <unistd.h>

int main(int ac, char **av)
{
    int i;
    int j;
    int k;

    i = 0;
    if (ac == 3)
    {
       while(av[1][i])
       {
            j = 0;
            while(av[2][j])
            {
                if(av[1][i] == av[2][j])
                    break;
                j++;
            }
       }
       k = 0;
       while(k < i && av[1][k] != av[1][i])
            k++;
        if(av[2][j] != '\0' && k == i)
            write(1, &av[1][i], 1);
        i++; 
    }
    write(1, "\n", 1);
    return (0);
}