
#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char			*m;
	unsigned int	i;

	m = malloc(ft_strlen((char *)s1) + 1);
	if (!m)
		return (0);
	i = 0;
	while (s1[i] != '\0')
	{
		m[i] = s1[i];
		i++;
	}
	m[i] = '\0';
	return (m);
}
