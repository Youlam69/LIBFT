/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamraou <ylamraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 01:32:15 by ylamraou          #+#    #+#             */
/*   Updated: 2021/12/17 01:32:18 by ylamraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			i;
	char			*dst1;
	char			*src1;

	if (!dst && !src)
		return (NULL);
	dst1 = (char *)dst;
	src1 = (char *)src;
	i = 0;
	while (i < n)
	{
		dst1[i++] = *src1++;
	}
	return (dst);
}
