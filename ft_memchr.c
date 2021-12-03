
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char p;
	unsigned char *ps;

	p = (unsigned char)c;
	ps = (unsigned char *)s;
	while (n--)
	{
		if (*ps == p)
			return ((void *)ps);
		ps++;
	}
	return (0);
}
