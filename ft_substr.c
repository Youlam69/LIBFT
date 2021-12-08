
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	char			*str;

	if (!s)
		return (0);
	if (start > ft_strlen(s))
		len = 0;
	if(len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	if (!(str = malloc(len + 1 * (sizeof(char)))))
		return (0);
	i = 0;
	while (i < len && s[start])
		str[i++] = s[start++];
	str[i] = '\0';
	return (str);
}
