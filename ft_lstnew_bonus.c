
#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list *s;

	if (!(s = (t_list *)malloc(sizeof(t_list))))
		return (NULL);
	(*s).content = content;
	(*s).next = NULL;
	return (s);
}
