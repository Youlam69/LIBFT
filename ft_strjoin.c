
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char			*str;
	unsigned int	l1;
	unsigned int	l2;

	if (!s1 || !s2)
		return (NULL);
	l1 = ft_strlen((char *)s1);
	l2 = ft_strlen((char *)s2);
	str = ft_calloc(l1 + l2 + 1, sizeof(char));
	if (!str)
		return (NULL);
	ft_strlcat(str, s1, (size_t)l1 + 1);
	l2 = l2 + l1;
	ft_strlcat(str, s2, (size_t)l2 + 1);
	return (str);
}
