#include "libft.h"

int	size_str(char const *s, char c)
{
	int	len;

	len = 0;
	while (*s == c && *s)
		s++;
	while (s[len] != c && s[len])
		len++;
	return (len);
}

int	size_tab(char const *s, char c)
{
	int	size_2d;

	size_2d = 0;
	while (*s)
	{
		if (*s != c)
		{
			size_2d++;
			while (*s != c && *s)
				s++;
		}
		while (*s == c && *s)
			s++;
	}
	return (size_2d);
}

char const	*alloc_str(char **tab, char const *s, char c, int i)
{
	int		j;
	char	*str;

	j = 0;
	str = malloc(sizeof(char) * size_str(s, c) + 1);
	if (!str)
	{
		while (i >= 0)
			free(tab[i--]);
		free(tab);
		return (NULL);
	}
	while (*s && *s != c)
		str[j++] = *s++;
	str[j] = '\0';
	tab[i] = str;
	i++;
	return (s);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	int		i;

	if (!s)
		return (NULL);
	tab = malloc(sizeof (char *) * size_tab(s, c) + 1);
	if (!tab)
		return (NULL);
	i = 0;
	while (*s)
	{
		if (*s != c)
			s = alloc_str (tab, s, c, i++);
		if (!*s)
			break ;
		s++;
	}
	tab[i] = NULL;
	return (tab);
}
