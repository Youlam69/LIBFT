/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamraou <ylamraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 01:32:39 by ylamraou          #+#    #+#             */
/*   Updated: 2021/12/17 01:32:39 by ylamraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;

	if (!lst || !f)
		return (NULL);
	new = NULL;
	while (lst)
	{
		ft_lstadd_back(&new, ft_lstnew(f(lst->content)));
		if (!new)
			ft_lstclear(&new, del);
		lst = lst->next;
	}		
	return (new);
}
