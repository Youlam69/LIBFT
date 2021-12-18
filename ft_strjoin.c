/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamraou <ylamraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 01:29:22 by ylamraou          #+#    #+#             */
/*   Updated: 2021/12/18 18:58:07 by ylamraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	l1;
	size_t	l2;

	if (!s1 || !s2)
		return (NULL);
	l1 = ft_strlen((char *)s1);
	l2 = ft_strlen((char *)s2);
	str = (char *)ft_calloc(l1 + l2 + 1, sizeof(char));
	if (!str)
		return (NULL);
	ft_strlcat(str, s1, l1 + 1);
	l2 = l2 + l1;
	ft_strlcat(str, s2, l2 + 1);
	return (str);
}
