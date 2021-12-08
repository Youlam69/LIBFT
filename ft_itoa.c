#include "libft.h"

unsigned int	size_of_n(int nbr)
{
	unsigned int	i;
	long int		n;

	n = (long int)nbr;
	i = 0;
	if (n <= 0)
	{
		n *= -1;
		i++;
	}
	while (n > 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*to_fill(char *tab, long int nbr)
{
	unsigned int	i;

	i = size_of_n(nbr);
	if (nbr < 0)
	{
		tab[0] = '-';
		nbr *= -1;
	}
	tab[i--] = '\0';
	while (nbr >= 10)
	{
		tab[i--] = nbr % 10 + 48;
		nbr /= 10;
	}
	if (nbr < 10)
		tab[i] = nbr % 10 + 48;
	return (tab);
}

char	*ft_itoa(int n)
{
	unsigned int	len;
	long int		nbr;
	char			*tab;

	nbr = (long int)n;
	len = size_of_n(n) + 1;
	tab = (char *)malloc(sizeof(char) * len);
	if (!tab)
		return (NULL);
	return (to_fill(tab, nbr));
}
