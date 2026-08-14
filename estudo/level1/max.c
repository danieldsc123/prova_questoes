int max(int *tab, unsigned int len)
{
    unsigned int i;
    int max_value;

    if (len == 0)
        return (0);
    max_value = tab[0];
    i = 1;
    while (i < len)
    {
        if (tab[i] > max_value)
            max_value = tab[i];
        i++;
    }
    return (max_value);
}