char *ft_strrev(char *str)
{
    int i;
    int f;
    char tmp;

    i = 0;
    f = 0;
    while (str[f])
        f++;
    f--;
    while (i < f)
    {
        tmp = str[i];
        str[i] = str[f];
        str[f] = tmp;
        i++;
        f--;
    }
    return (str);
}