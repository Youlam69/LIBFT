
#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void *s;

	s = malloc(count * size);
	if (!s)
		return (0);
	ft_bzero(s, count * size);
	return (s);
}
