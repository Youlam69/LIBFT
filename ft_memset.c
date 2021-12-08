
#include "libft.h"



void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;
	char			*ptr;

	ptr = (char *)b;
	i = 0;
	while (i < len)
		ptr[i++] = (unsigned char)c;

	return (ptr);
}

