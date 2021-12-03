
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned int i;
	unsigned int l;

	i = 0;
	l = ft_strlen((char *)s) + 1;
	while (l--)
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i++;
	}
	return (0);
}
