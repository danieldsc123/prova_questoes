#include <stdlib.h>

char *ft_strdup(char *src)
{
    int i;
    char *copy;
    int len;

    i = 0;
    len = 0;
    while (src[len] != '\0')
        len++;
    copy = malloc(sizeof(char) * (len + 1));
    if (copy == NULL)
        return (NULL);
    while (src[i])
    {
        copy[i] = src[i];
        i++;
    }
    copy[i] = '\0';
    return (copy);
}