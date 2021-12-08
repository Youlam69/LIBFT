
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned int	len;

	len = ft_strlen((char *)s) + 1;
	while (len--)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	return (0);
}
