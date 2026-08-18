#include <stdlib.h>

char	*ft_itoa(int nbr)
{
	int		len;
	char	*str;

	len = 1;
	if (nbr < 0)
	{
		len++;
		nbr = -nbr;
	}
	while (nbr >= 10)
	{
		nbr /= 10;
		len++;
	}
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	str[len] = '\0';
	nbr = nbr;
	if (nbr < 0)
	{
		str[0] = '-';
		nbr = -nbr;
	}
	while (nbr >= 10)
	{
		str[--len] = (nbr % 10) + '0';
		nbr /= 10;
	}
	str[--len] = nbr + '0';
	return (str);
}