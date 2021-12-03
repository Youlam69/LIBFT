/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obounri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/11 01:33:57 by obounri           #+#    #+#             */
/*   Updated: 2019/11/12 22:44:34 by obounri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *new;
	t_list *tmp;

	new = NULL;
	while (lst)
	{
		if (!(tmp = ft_lstnew(f((*lst).content))))
		{
			ft_lstclear(&new, del);
			ft_lstclear(&tmp, del);
			return (0);
		}
		ft_lstadd_back(&new, tmp);
		lst = (*lst).next;
	}
	return (new);
}
