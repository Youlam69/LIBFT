
#include "libft.h"

int		size_of_n(long nbr)
{
	int size;

	size = 1;
	if (nbr < 0)
	{
		nbr *= -1;
		size++;
	}
	while (nbr > 9)
	{
		nbr /= 10;
		size++;
	}
	return (size);
}

char	*lkhedma(char *buffer, long nbr, int i)
{
	if (nbr < 0)
	{
		nbr *= -1;
	}
	if (nbr > 9)
	{
		lkhedma(buffer, (nbr / 10), --i);
		buffer[i] = (nbr % 10) + 48;
	}
	if (nbr < 10)
	{
		i--;
		buffer[i] = nbr + 48;
	}
	return (buffer);
}

char	*ft_itoa(int n)
{
	long	nbr;
	int		p;
	int		i;
	char	*buffer;

	nbr = n;
	p = size_of_n(nbr) + 1;
	i = 0;
	if (!(buffer = (char *)malloc(p * sizeof(char))))
		return (0);
	if (n < 0)
		*buffer = '-';
	while (i < (p - 1))
		i++;
	buffer[i] = '\0';
	return (lkhedma(buffer, nbr, i));
}
