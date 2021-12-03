
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned char	i;
	char			*a;

	if (!s)
		return (0);
	if (start > ft_strlen(s))
		len = 0;
	if (!(a = malloc(len + 1 * (sizeof(char)))))
		return (0);
	i = 0;
	while (i < len && s[start] != '\0')
	{
		a[i] = s[start];
		i++;
		start++;
	}
	a[i] = '\0';
	return (a);
}
