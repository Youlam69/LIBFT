/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamraou <ylamraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 01:29:37 by ylamraou          #+#    #+#             */
/*   Updated: 2021/12/17 01:29:41 by ylamraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned int	len;

	len = ft_strlen((char *)s) + 1;
	while (len--)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	return (0);
}
