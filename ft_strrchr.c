
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned int i;

	i = ft_strlen((char *)s) + 1;
	while (i--)
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
	}
	return (NULL);
}
