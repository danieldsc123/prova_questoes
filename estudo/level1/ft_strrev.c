char *ft_strrev(char *str)
{
    int i;
    int f;
    char temp;

    i = 0;
    f = 0;
    while (str[f])
        f++;
    f--;
    while (i < f)
    {
        temp = str[i];
        str[i] = str[f];
        str[f] = temp;
        i++;
        f--;
    }
    return (str);
}
