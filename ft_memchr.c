
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ps;

	ps = (unsigned char *)s;
	while (n--)
	{
		if (*ps == (unsigned char)c)
			return (ps);
		ps++;
	}
	return (0);
}
