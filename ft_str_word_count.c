
#include "libft.h"

size_t		ft_str_word_count(char const *s, char c)
{
	char			*trimmed;
	char			set[2];
	unsigned int	i;
	unsigned int	wc;

	if (!s)
		return (0);
	set[0] = c;
	set[1] = '\0';
	trimmed = ft_strtrim(s, (char const *)&set);
	i = 0;
	if (ft_strlen((char const *)trimmed) == 0)
		return (i);
	wc = 1;
	while (trimmed[i] != '\0')
	{
		if (trimmed[i] == c)
			wc++;
		while (trimmed[i] == c)
			i++;
		i++;
	}
	return (wc);
}
