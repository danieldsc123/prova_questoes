char *ft_strcpy(char *s1, char *s2)
{
    int i;

    i = 0;
    while(s1[i])
    {
        s1[i] = s2[i];
        i++;
    }
    s1[1] = '\0';
    return(s1);
}