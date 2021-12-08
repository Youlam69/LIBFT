
#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char			*str;
	unsigned int	i;

	str = malloc(ft_strlen((char *)s1) + 1);
	if (!str)
		return (NULL);
	i = 0;
	while (*s1)
		str[i++] = *s1++;
	str[i] = '\0';
	return (str);
}
