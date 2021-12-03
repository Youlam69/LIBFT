

#include "libft.h"

int		word_length(char const *s, char c)
{
	unsigned int i;

	if (!s)
		return (0);
	i = 0;
	while (s[i] != '\0' && !(s[i] == c))
		i++;
	return (i);
}

size_t	str_word_count(char const *s, char c)
{
	char			*trimmed;
	char			set[2];
	unsigned int	i;
	unsigned int	wc;

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

void	freetabs(char **splited, unsigned int index)
{
	unsigned int i;

	i = 0;
	while (i < index)
	{
		free(splited[i]);
		i++;
	}
	free(splited);
	splited = NULL;
}

char	**aammer(char **splited, char const *s, char c, unsigned int i)
{
	unsigned int index;
	unsigned int len;

	index = 0;
	while (s[i] != '\0' && (index < str_word_count(s, c)))
	{
		while ((s[i] == c) && s[i] != '\0')
			i++;
		len = word_length(&s[i], c);
		if (!(splited[index] = ft_substr(s, i, len)))
		{
			freetabs(splited, index);
			return (0);
		}
		index++;
		i += len;
	}
	splited[index] = 0;
	return (splited);
}

char	**ft_split(char const *s, char c)
{
	char			**splited;
	unsigned int	i;

	if (!s || !(splited = (char **)malloc((str_word_count(s, c) + 1)
					* sizeof(char *))))
		return (0);
	i = 0;
	if (!(splited = aammer(splited, s, c, i)))
		return (0);
	return (splited);
}
