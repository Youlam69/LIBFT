
#include "libft.h"

int		to_be_trimmed(char c, char const *set)
{
	unsigned int i;

	i = 0;
	while (set[i] != '\0')
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	unsigned int	i;
	unsigned int	j;
	char			*t;

	if (!s1 || !set)
		return (0);
	i = 0;
	while (s1[i] != '\0')
	{
		if (to_be_trimmed(s1[i], set) == 0)
			break ;
		i++;
	}
	j = ft_strlen((char *)s1);
	while (j-- && i <= j)
	{
		if (to_be_trimmed(s1[j], set) == 0)
			break ;
	}
	t = ft_substr(s1, i, (j - i + 1));
	return (t);
}
