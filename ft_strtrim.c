/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamraou <ylamraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 18:43:09 by ylamraou          #+#    #+#             */
/*   Updated: 2021/12/17 22:14:19 by ylamraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	unsigned int	i;
	char			*tab;

	if (!s1 || !set)
		return (NULL);
	while (*s1)
	{
		if (!ft_strchr(set, *s1))
			break ;
		s1++;
	}
	i = ft_strlen((char *)s1);
	while (i > 0)
		if (!ft_strchr(set, s1[--i]))
			break ;
	tab = ft_substr(s1, 0, i + 1);
	return (tab);
}
