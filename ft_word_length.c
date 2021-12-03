
#include "libft.h"

int		ft_word_length(char const *s, char c)
{
	unsigned int i;

	if (!s)
		return (0);
	i = 0;
	while (s[i] != '\0' && !(s[i] == c))
		i++;
	return (i);
}
