/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamraou <ylamraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 01:33:07 by ylamraou          #+#    #+#             */
/*   Updated: 2021/12/18 19:01:59 by ylamraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	size_of_n(int nbr)
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

static char	*to_fill(char *tab, long int nbr)
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
	long int		nbr;
	char			*tab;

	nbr = (long int)n;
	tab = (char *)malloc(sizeof(char) * (size_of_n(n) + 1));
	if (!tab)
		return (NULL);
	return (to_fill(tab, nbr));
}
