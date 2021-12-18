/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamraou <ylamraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 01:29:10 by ylamraou          #+#    #+#             */
/*   Updated: 2021/12/17 01:29:14 by ylamraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	len;

	i = -1;
	len = ft_strlen(src);
	if (!size)
		return (len);
	while (src[++i] && i < (size - 1))
		dest[i] = src[i];
	dest[i] = '\0';
	return (len);
}
